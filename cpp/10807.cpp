#include <algorithm>
#include <iostream>
#include <vector>
int main()
{
	int N,v;
	std::vector<int> v(101);
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		std::cin>>v[i];
	}
	std::cin >> v;
	int count;
	std::for_each(v.cbegin(), v.cend(), [=,count](const int &n){ if(n==v) count++; });
	std::cout << count;

	return 0;
}