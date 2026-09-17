#include <iostream>

using namespace std;

int main(){
	short t;
	cin >> t;
	while (t--){
		short n;
		cin >> n;
		for (int i=2; i*i<=n; i++)
		{
			short cnt = 0;
			while (n % i == 0)
			{
				cnt++;
				n /= i;
			}
			if (cnt != 0)
				cout << i << " " << cnt << " ";
		}
		if (n > 1)
			cout << n << " 1";
		cout << endl;
	}
	return 0;
}
