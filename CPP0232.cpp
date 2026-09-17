#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int A[n][m];
		int minOne = 20;
		for (int i = 0; i < n; i++){
			int cnt = 0;
			for (int j = 0; j < m; j++){
				cin >> A[i][j];
				if (A[i][j] == 1){
					cnt++;
				}
			}
			minOne = min(minOne, cnt);
		}
		int res = minOne * n;
		cout << res << endl;
	}
	return 0;
}
