#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef tuple<int, string, int> tup;
int main()
{
	int n;
	cin >> n;
	int age;
	string name;
	vector<tup> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		v[i]={ age,name, i };
	}
	sort(v.begin(), v.end(), [](const tup& a, const tup& b) {
		if (std::get<0>(a) != std::get<0>(b))
			return get<0>(a) < get<0>(b);
		return get<2>(a) < get<2>(b);
		});
	for (auto& cust : v)
	{
		cout << get<0>(cust) << ' ' << get<1>(cust) << '\n';
	}
}