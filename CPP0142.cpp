#include <iostream>
#include <math.h>

using namespace std;

int ucln(int a, int b){
	while (b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

bool checkNT(int n){
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
		int x;
		cin >> x;
		int dem = 0;
		for (int i=1; i<=x; i++){
			if (ucln(i, x) == 1){
				dem++;
			}
		}
		if (checkNT(dem)){
			cout << 1;
		} else {
			cout << 0;
		}
		cout << endl;
	}
	return 0;
} 
