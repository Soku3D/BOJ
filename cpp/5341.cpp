#include <iostream>

using namespace std;
int main()
{
	while(1){
		int f;
		cin >> f;
		if(f==0)
			break;
		cout << ((f+1)*f)/2 << '\n';
	}
}