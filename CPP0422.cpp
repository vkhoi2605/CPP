#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long A[n];
		for (int i=0; i<n; i++){
			cin >> A[i];
		}
		int cnt = 0;
		for (int i=0; i<n; i++){
			if (A[i] >= 1){
				cout << A[i] << " ";
			} else {
				++cnt;
			}
		}
		for (int i=0; i<cnt; i++){
			cout << "0 ";
		}
		cout << endl;
	}
	return 0;
} 
