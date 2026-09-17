#include <iostream>
#include <math.h>

using namespace std;

bool checkNT(int n){
	for (int i=2; i<=sqrt(n); i++){
		if (n % i == 0)
			return false;
	}
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i=2; i<=sqrt(n); i++){
			if (checkNT(i))
				cout << i * i << " ";
		}
		cout << endl;
	}
	return 0;
}
