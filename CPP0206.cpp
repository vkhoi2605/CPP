#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n];
		for (int i=0; i<n; i++){
			cin >> A[i];
		}
		int maxarr = 0;
		for (int i=0; i<n; i++){
			maxarr = max(maxarr, A[i]);
		}
		cout << maxarr << endl;
	}
	return 0;
}
