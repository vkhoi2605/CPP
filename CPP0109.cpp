#include <iostream>

using namespace std;

bool ktra(int n)
{
	short chan = 0, le = 0;
	while (n >= 1)
	{
		if (n % 2 == 0)
			chan++;
		else
			le++;
		n /= 10;
	}
	return chan == le;
}

int luythua(short a, short b)
{
	int ans = 1;
	for (int i=1; i<=b; i++)
		ans *= a;
	return ans;
}

int main()
{
	short n;
	cin >> n;
	short cnt = 0;
	for (int i=luythua(10, n-1); i<=luythua(10,n)-1; i++)
	{
		if (ktra(i))
		{
			cout << i << " ";
			cnt++;
			if (cnt == 10)
			{
				cout << endl;
				cnt = 0;
			}
		}
	}
	return 0;
}
