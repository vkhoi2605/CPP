#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long A[n], C[10];
		memset(C, 0, sizeof(C));
		for (int i=0; i<n; i++){
			cin >> A[i];
			long long tmp = A[i];
			while (tmp != 0){
				int t = tmp % 10;
				C[t]++;
				tmp /= 10;
			}
		}
		for (int i=0; i<=9; i++){
			if (C[i] >= 1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
