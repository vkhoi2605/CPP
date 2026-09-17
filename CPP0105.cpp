#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		bool kt = true;
		while (n >= 1)
		{
			if (n % 10 != 6 && n % 10 != 8 && n % 10 != 0){
				kt = false;
				break;
			}
			n /= 10;
		}
		if (kt)
			cout << "YES" << endl;
		else
			cout << "NO\n";
	}
	return 0;
}
