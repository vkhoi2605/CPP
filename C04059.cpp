#include <iostream>

using namespace std;

int main(){
	long long F[100];
	F[1] = 1;
	F[2] = 1;
	for (int i=3; i<=92; i++){
		F[i] = F[i-1] + F[i-2];
	}
	int t;
	cin >> t;
	while (t--){
		int l, r;
		cin >> l >> r;
		if (l > r){
			int tmp = l;
			l = r;
			r = tmp;
		}
		for (int i=l; i<=r; i++){
			cout << F[i] << " ";
		}
		cout << endl;
	}
	return 0;
} 
