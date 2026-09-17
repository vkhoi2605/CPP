#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n][n], C[n * n] = {0};
	int cnt = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> A[i][j];
			C[cnt++] = A[i][j];
		}
	}
	sort (C, C + cnt);
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	cnt = 0;
	while (h1 <= h2 && c1 <= c2){
		for (int i = c1; i <= c2; i++){
			A[h1][i] = C[cnt++];
		}
		h1++;
		
		for (int i = h1; i <= h2; i++){
			A[i][c2] = C[cnt++];
		}
		c2--;
		
		if (h1 <= h2){
			for (int i = c2; i >= c1; i--){
				A[h2][i] = C[cnt++];
			}
			h2--;
		}
		
		if (c1 <= c2){
			for (int i = h2; i >= h1; i--){
				A[i][c1] = C[cnt++];
			}
			c1++;
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
