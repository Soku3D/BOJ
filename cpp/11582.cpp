#include <iostream>
#include <vector>
using namespace std;
int k;
const int MAX = 1e10 + 1;
void Merge(vector<int> &v, const int &start, const int &mid, const int &end,
           const int level)
{
    if (level < k)
        return;
    int lScale = mid - start + 1;
    int rScale = end - mid;
    vector<int> lvec(v.begin() + start, v.begin() + mid+1);
    vector<int> rvec(v.begin() + mid + 1, v.begin() + end+1);
    lvec.emplace_back(MAX);
    rvec.emplace_back(MAX);
    int lidex = 0, ridex = 0;
    for (int i = start; i <= end; ++i) {
        if (lvec[lidex] < rvec[ridex]) {
            v[i] = lvec[lidex];
            lidex++;
        }
        else {
            v[i] = rvec[ridex];
            ridex++;
        }
    }
}
void MergeSort(vector<int> &v, int start, int end, int level)
{
    if (start < end) {
        int mid = (end + start) / 2;
        MergeSort(v, start, mid, level*2);
        MergeSort(v, mid + 1, end, level * 2);
        Merge(v, start, mid, end, level);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> k;
    MergeSort(arr, 0, n - 1, 1);
    for (auto &val : arr)
        cout << val << ' ';
}