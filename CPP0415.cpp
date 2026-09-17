#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int A[n], B[m];
		int maxA = -100000000 - 1, minB = 100000000 + 1;
		long long res;
		for (int i=0; i<n; i++){
			cin >> A[i];
			maxA = max(maxA, A[i]);
		}
		for (int i=0; i<m; i++){
			cin >> B[i];
			minB = min(minB, B[i]);
		}
		res = (long long)maxA * minB;
		cout << res << endl;
	}
	return 0;
}
