#include <iostream>

using namespace std;

int tongcs(int n){
	while (n >= 10){
		n = n % 10 + n / 10;
	}
	return n;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << tongcs(n) << endl;
	}
	return 0;
}
