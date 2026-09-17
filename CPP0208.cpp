#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int A[n];
		for (int i=0; i<n; i++){
			cin >> A[i];
		}
		sort (A, A + n);
		cout << A[k-1] << endl;
	}
	return 0;
}
