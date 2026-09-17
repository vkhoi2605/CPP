#include <iostream>

using namespace std;

bool ktra(int n)
{
	int sum = 0;
	while (n >= 1)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
		if (sum > 68)
			return false;
		else if (sum == 68)
			return true;
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (ktra(n))
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
