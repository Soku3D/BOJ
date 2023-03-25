#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &arr)
{
    for (size_t i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> T;
    vector<int> arr(T);
    for (size_t i = 0; i < T; i++) {
        cin >> arr[i];
    }
    InsertionSort(arr);
    for (const int &num : arr)
        cout << num << '\n';
}