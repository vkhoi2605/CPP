#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int A[n][m];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> A[i][j];
			}
		}
		int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
		while (h1 < h2 && c1 < c2){
			int pre = A[h1 + 1][c1];
			for (int i = c1; i <= c2; i++){
				int cur = A[h1][i];
				A[h1][i] = pre;
				pre = cur;
			}
			h1++;
			
			for (int i = h1; i <= h2; i++){
				int cur = A[i][c2];
				A[i][c2] = pre;
				pre = cur;
			}
			c2--;
			
			if (h1 <= h2){
				for (int i = c2; i >= c1; i--){
					int cur = A[h2][i];
					A[h2][i] = pre;
					pre = cur;
				}
				h2--;
			}
			
			if (c1 <= c2){
				for (int i = h2; i >= h1; i--){
					int cur = A[i][c1];
					A[i][c1] = pre;
					pre = cur;
				}
				c1++;
			}
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cout << A[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
