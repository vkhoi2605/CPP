#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> k >> n;
		int A[k][n], C[k * n], cnt = 0;
		for (int i=0; i<k; i++){
			for (int j=0; j<n; j++){
				cin >> A[i][j];
				C[cnt++] = A[i][j];
			}
		}
		sort (C, C + cnt);
		for (int i=0; i<cnt; i++){
			cout << C[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
