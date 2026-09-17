#include <iostream>
#include <math.h>

using namespace std;

bool checkNT(int n){
	for (int i=2; i<=sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		int res = 0; 
		for (int i=2; i<=sqrt(n); i++){
			if (checkNT(i)){
				res++;
			}
		}
		cout << res << endl; 
	}
	return 0;
}
