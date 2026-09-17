#include <iostream>
#define ull unsigned long long

using namespace std; 

int solienke(ull n)
{
	while (n >= 10)
	{
		int t = n % 10;
		n /= 10;
		if (t - n % 10 != 1 && t - n % 10 != -1)
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ull n;
		cin >> n;
		if (solienke(n) == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
