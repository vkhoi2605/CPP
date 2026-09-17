#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int A[n][m];
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				cin >> A[i][j];
				
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				if (A[i][j] == 1){
					for (int k=0; k<n; k++)
						if (A[k][j] == 0)
							A[k][j] = -1;
					for (int k=0; k<m; k++)
						if (A[i][k] == 0)
							A[i][k] = -1;
				}
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				if (A[i][j] == 0)
					cout << 0 << " ";
				else
					cout << 1 << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
