#include <iostream>
#include <math.h>

using namespace std;

bool checkNT(int n){
	for (int i=2; i<=sqrt(n); i++)
		if (n % i == 0)
			return false;
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int L, R;
		cin >> L >> R;
		int dem = 0;
		for (int i=L; i<=R; i++)
			if (checkNT(i)){
				dem++;
			}
		cout << dem << endl;
	}
	return 0;
}
