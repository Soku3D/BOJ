#include <iostream>
#include <string>
using namespace std;

int main() {
  int arr[10]{0,};
  string str1;
  cin >> str1;
  for (int i = 0; i < str1.size(); i++) {
    int num = str1[i] - '0';
        arr[num]++;
  }
  arr[6] += arr[9];
  if (arr[6] % 2 == 0)
        arr[6] /= 2;
  else
        arr[6] = arr[6] / 2 + 1;
  int maxVal = 0;
  for (int i = 0; i < 9; i++) {
    maxVal = max(maxVal, arr[i]);
  }
  cout << maxVal;
}