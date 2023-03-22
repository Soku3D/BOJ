#include <iostream>
#include <algorithm>
using namespace std;
const int numCount = 7;

int main()
{
	cin.tie(0)->sync_with_stdio(0);
	int sum = 0, min = 101;
	int arr[numCount];
	for (size_t i = 0; i < numCount; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 == 1)
		{
			sum += arr[i];
			if (arr[i] < min)
				min = arr[i];
		}
	}
	if (sum != 0)	{
		cout << sum << '\n' << min;
	}
	else
		cout << -1;
	
}