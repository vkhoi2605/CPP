#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	short t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n];
		for (int i=0; i<n; i++){
			cin >> A[i];
		}
		int minarr = 1e9;
		sort(A, A + n);
		for (int i=1; i<n; i++){
			minarr = min(minarr, (A[i] - A[i-1]));
		}
		cout << minarr << endl;
	}
	return 0;
}
