#include <iostream>
#include <sstream>

using namespace std;

int main()
{   
    cin.tie(0)->sync_with_stdio(0);
    string str, s;
    int count =0;
    getline(cin, str);
    istringstream is(str);
    
    while (is >> s) {
        count++;
    }
    cout << count;
}