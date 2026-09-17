#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int A[n], B[m], C[n + m], cnt = 0;
		for (int i=0; i<n; i++){
			cin >> A[i];
			C[cnt++] = A[i];
		}
		for (int i=0; i<m; i++){
			cin >> B[i];
			C[cnt++] = B[i];
		}
		sort (C, C + cnt);
		for (int i=0; i<cnt; i++){
			cout << C[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
