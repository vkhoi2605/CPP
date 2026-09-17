#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n], B[n], C[n];
		memset (B, 0, sizeof(B));
		memset (C, 0, sizeof(C));
		for (int i=0; i<n; i++){
			cin >> A[i];
		}
		sort (A, A + n);
		for (int i=0; i<n; i++){
			B[i] = A[i];
		}
		sort (A, A + n, cmp);
		for (int i=0; i<n; i++){
			C[i] = A[i];
		}
		for (int i=0; i<n/2; i++){
			cout << C[i] << " " << B[i] << " ";
		}
		if (n % 2 != 0){
			cout << C[n/2];
		}
		cout << endl;
	}
	return 0;
}
