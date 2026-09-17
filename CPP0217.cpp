#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int A[n][n], B[n*n];
		int cnt = 0;
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cin >> A[i][j];
				B[cnt++] = A[i][j];
			}
		}
		sort (B, B + n*n);
		cout << B[k-1] << endl;
	}
	return 0;
}
