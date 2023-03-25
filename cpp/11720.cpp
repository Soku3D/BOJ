#include <iostream>
#include <string>
using namespace std;

int main()
{
    int len, sum =0;
    cin >> len;
    string str;
    cin >> str;
    for (size_t i = 0; i < len; i++) {
        sum += (str[i] - '0');
    }
    cout << sum;
}