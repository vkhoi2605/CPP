#include <iostream>
#include <algorithm>

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
		sort (A, A + n);
		int minarr = 1e9;
		for (int i=1; i<n; i++){
			minarr = min(minarr, A[i] - A[i-1]);
		}
		cout << minarr << endl;
	}
	return 0;
}
