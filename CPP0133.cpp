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
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i=2; i<=n; i++){
			if (checkNT(i))
				cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
