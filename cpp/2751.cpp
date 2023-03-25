#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1e7;
void Merge(vector<int> &arr, int p, int q, int r)
{   
    int ls = q-p+1;
    int rs = r-q;
    vector<int> larr(arr.begin() + p, arr.begin() + q+1);
    vector<int> rarr(arr.begin()+q+1, arr.begin()+r+1 );
    larr.emplace_back(MAX);
    rarr.emplace_back(MAX);
    int i = 0, j = 0, index = 0;
    for (int idx1 = p; idx1 <= r; idx1++) 
    {
        if (larr[i] < rarr[j])
        {
            arr[idx1] = larr[i];
            i++;
        }
        else
        {
            arr[idx1] = rarr[j];
            j++;
        }
    }
}
void MergeSort(vector<int> &arr, int b, int e)
{
    if (b < e)
    {
        int m = (b + e) / 2;
        MergeSort(arr, b, m);
        MergeSort(arr, m + 1, e);
        Merge(arr, b, m, e);
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> T;
    vector<int> arr(T);
    for (int i = 0; i < T; i++) 
        cin >> arr[i];
    MergeSort(arr, 0, arr.size() - 1);
    for (auto &x : arr)
        cout << x << '\n';
}