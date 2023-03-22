#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;

bool compare(const pii& l, const pii& r)
{
	if (l.second != r.second)
		return l.second < r.second;
	return l.first < r.first;
}
int main()
{
	cin.tie(0)->sync_with_stdio(0);
	int n;
	cin >> n;
	vector<pii> v(n);
	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		v[i]={ x,y };
	}
	sort(v.begin(), v.end(), compare);
	for (auto& pos : v)
		cout << pos.first << ' ' << pos.second << '\n';
}