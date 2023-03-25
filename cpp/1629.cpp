#include <iostream>

using namespace std;

typedef unsigned long long ull;

ull mul(ull a, ull b, ull c)
{
    if (b > 1)
    {
        if (b % 2 == 0)
        {
            ull value = mul(a, b / 2, c) % c;
            return (value * value)%c;
        }
        else
        {
            ull value = mul(a, b / 2, c) % c;
            return (a * ((value * value)%c))%c;
        }
    }
    return a;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ull A, B, C;
    cin >> A >> B >> C;
    A %= C;
    ull result = mul(A, B, C);
    cout << result;
}