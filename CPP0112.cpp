#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		double ans = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		cout << fixed << setprecision(4) << ans << endl;
	}
	return 0;
}
