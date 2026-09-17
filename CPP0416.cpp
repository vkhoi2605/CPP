#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int A[n], C[1002];
		memset(C, 0, sizeof(C));
		int res = 0;
		for (int i=0; i<n; i++){
			cin >> A[i];
			C[A[i]]++;
		}
		for (int i=0; i<=k/2; i++){
			if (C[i] >= 1 && C[k - i] >= 1 && k - i >= 0){
				if (i != k - i){
					res += C[i] * C[k - i];
				} else {
					res += (C[i] * (C[i] - 1)) / 2;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
