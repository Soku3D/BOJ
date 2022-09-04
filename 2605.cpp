#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    int list_size,a;
    cin >> list_size >> a;
    l.push_back(1);
    auto it = l.end();
    for(int i=2; i<=list_size; i++)
    {   
        it = l.end();
        cin >> a;
        l.insert(prev(it, a), i);
    }
    for(auto x : l)
    {
        cout << x << ' ';
    }
}
