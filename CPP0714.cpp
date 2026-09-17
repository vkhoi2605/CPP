#include <iostream>
#include <bits/stdc++.h>

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
		prev_permutation(A, A + n);
		for (int i=0; i<n; i++){
			cout << A[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
