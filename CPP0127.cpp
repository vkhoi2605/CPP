#include <iostream>

using namespace std;

bool checkNT(int n){
	for (int i=2; i*i<=n; i++){
		if (n % i == 0){
			return false;
		}
	}
	return n > 1;
}

int main(){
	short t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		bool check = false;
		for (int i=2; i<=n/2; i++){
			if (checkNT(i) && checkNT(n-i)){
				check = true;
				cout << i << " " << n - i << endl;
				break;
			}
		}
		if (!check){
			cout << -1 << endl;
		}
	}
	return 0;
}
