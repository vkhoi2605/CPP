#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char s;
		cin >> s;
		if ('A' <= s && s <= 'Z')
			s += 32;
		else
			s -= 32;
		cout << s << endl;
	}
	return 0;
}
