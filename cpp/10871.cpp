#include <bits/stdc++.h>

using namespace std;
int main(void)
{
	int N, X;
	cin >> N >> X;

	int num;
	for (int i = 0; i < N; ++i)
	{
		cin >> num;
		if (num < X)
		{
			cout << num;
		}
	}
	return 0;
}