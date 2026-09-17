#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n][n];
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				cin >> A[i][j];
		int j = 0;
		for (int i=0; i<n; i++){
			while (-1 < j && j < n){
				cout << A[i][j] << " ";
				if (i % 2 == 0)
					j++;
				else
					j--;
			}
			if (j == n){
				j--;
			}
			if (j == -1){
				j++;
			}
		}
		cout << endl;
	}
	return 0;
}
