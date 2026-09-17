#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n][n];
		bool check[n][n];
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cin >> A[i][j];
				check[i][j] = false;
			}
		}
		for (int j=0; j<n; j++){
			check[0][j] = true;
			check[n-1][j] = true;
		}
		for (int i=0; i<n; i++){
			check[i][0] = true;
			check[i][n-1] = true;
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				if (check[i][j])
					cout << A[i][j] << " ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
