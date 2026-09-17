#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n];
		for (int i=0; i<n; i++)
			cin >> A[i];
		int maxarr = -1;
		for (int i=0; i<n-1; i++)
			for (int j=i+1; j<n; j++)
				maxarr = max(maxarr, A[j] - A[i]);
		cout << maxarr << endl;
	}
	return 0;
}
