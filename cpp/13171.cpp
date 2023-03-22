#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
const ull mod = 1'000'000'007;

ull func(const ull a, const ull b)
{
	if (b == 1)
		return a;
	ull num = func(a, b / 2) % mod;
	if (b % 2 == 0)
	{
		
		return ((num* num)%mod)%mod;
	}
	else
	{
		return ((num*num)%mod * (a % mod))%mod;
	}
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);
	ull A, x;
	cin >> A >> x;

	cout << func(A, x);
}