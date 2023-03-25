#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string str1, str2;
  for (int i = 0; i < n; i++) {
    cin >> str1 >> str2;
    int count1 = str1.size(), count2 = str2.size();
    int Alpha[26]{
        0,
    };
    for (int i = 0; i < count1; i++) {
      Alpha[str1[i] - 'a']++;
    }
    for (int i = 0; i < count2; i++) {
      Alpha[str2[i] - 'a']--;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++)
      sum += abs(Alpha[i]);
    cout << str1 << " & " << str2 << " are";
    if (sum != 0) {
      cout << " NOT";
    }
    cout << " anagrams.\n";
  }  
}