#include <iostream>
using namespace std;

int main() {
  bool list[30]{
      0,
  };
  int num;
  for (int i = 0; i < 28; i++) {
    cin >> num;
    list[num - 1] = true;
  }
  for (int i = 0; i < 30; i++) {
    if (!list[i])
      cout << i + 1 << '\n';
  }

}