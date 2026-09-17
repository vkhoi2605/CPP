#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int madethi;
		char s[15];
		char de101[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
		char de102[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
		cin >> madethi;
		int cnt = 0;
		for (int i=0; i<15; i++)
		{
			cin >> s[i];
			if (madethi == 101)
			{
				if (s[i] == de101[i])
					cnt++;
			}
			else
				if (s[i] == de102[i])
					cnt++;
		}
		float diem = float(cnt) / 15 * 10;
		cout << fixed << setprecision(2) << diem << endl;
	}
	return 0;
}
