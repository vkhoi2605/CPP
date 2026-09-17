#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		unsigned long long sum = 0;
		cin >> n;
		sum = (long long)n * (n + 1) / 2;
		cout << sum << endl;
	}
	return 0;
}
