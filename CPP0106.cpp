#include <iostream>
#define ull unsigned long long

using namespace std;

int tn(ull n)
{
	int A[18];
	int cnt = 0;
	while (n >= 1)
	{
		A[cnt++] = n % 10;
		n /= 10;
	}
	for (int i=0; i<cnt/2; i++)
		if (A[i] != A[cnt-i-1])
			return 0;
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
		if (tn(n) == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
