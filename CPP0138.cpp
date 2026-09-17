#include <iostream>

using namespace std;

bool checkNT(int n){
	for (int i=2; i*i<=n; i++)
		if (n % i == 0)
			return false;
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i=2; i<=n/2; i++)
			if (checkNT(i) && checkNT(n-i))
			{
				cout << i << " " << n - i << endl;
				break;
			}
	}
	return 0;
}
