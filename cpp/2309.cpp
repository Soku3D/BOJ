#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);
	int height[9];
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> height[i];
		sum += height[i];
	}
	bool end = false;
	for (int i = 0; i < 8; i++)
	{
		if (end)
			break;
		for (int j = 1; j < 9; j++)
		{
			if (sum - 100 - height[i] - height[j] == 0)
			{
				height[i] = height[j] = 0;
				end = true;
				break;
			}
		}
	}
	sort(height, height + 9);
	for (size_t i = 2; i < 9; i++)
	{
		cout << height[i]<<'\n';
	}
}