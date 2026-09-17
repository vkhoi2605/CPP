#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double sum = 0;
	for (int i=1; i<=n; i++)
		sum += (double)1 / i;
	cout << fixed << setprecision(4) << sum;
	return 0;
}
