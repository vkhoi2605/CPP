#include <iostream>
#include <math.h>

using namespace std;

int xuly(int n){
	for (int i=2; i<=sqrt(n); i++){
		if (n % i == 0){
			return i;
		}
	}
	return n;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i=1; i<=n; i++){
			cout << xuly(i) << " ";
		}
		cout << endl;
	}
	return 0;
}
