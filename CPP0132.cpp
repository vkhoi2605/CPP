#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

bool checkNT(long long n){
	for (int i=2; i<=sqrt(n); i++){
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
		long long n;
		long long r;
		cin >> n;
		bool check = false;
		for (int i=1; i<=sqrt(n); i++){
			if (n % i == 0){
				if (checkNT(n / i)){
					cout << n / i << endl;
					check = true;
					break;
				}
				if (checkNT(i))
					r = i;
			}
		}
		if (!check)
			cout << r << endl;
	}
	return 0;
}
