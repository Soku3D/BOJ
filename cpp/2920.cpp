#include <iostream>
#include <string>
using namespace std;

int main() {
  string ascending = "1 2 3 4 5 6 7 8";
  string descending = "8 7 6 5 4 3 2 1";
  string str;
  getline(cin, str);
  if (str == ascending)
    cout << "ascending";
  else if (str == descending)
    cout << "descending";
  else
    cout << "mixed";
}