#include <iostream>
using namespace std;
int main()
{
	int c, num;
	int sum = 0, maxsum = -1001;
	cin >> c;
	while (c--)
	{
		cin >> num;
		sum += num;
		if (sum > maxsum)
			maxsum = sum;
		if (sum < 0)
		{
			sum = 0;
		}
	}
	cout << maxsum;
}