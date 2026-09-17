#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long A[n];
		vector<int> C(n, -1);
		for (int i=0; i<n; i++){
			cin >> A[i];
			if (A[i] >= 0 && A[i] < n){
				C[A[i]] = A[i];
			} 
		} 
		for (int i=0; i<n; i++){
			cout << C[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
