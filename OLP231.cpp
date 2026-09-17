#include <iostream>
#include <cstring>

using namespace std;

int ucln(int a, int b){
	while (b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a; 
} 

int main(){
	int n, m;
	cin >> n >> m;
	int A[n], C[m+2];
	int cnt = 0;
	memset(C, 0, sizeof(C));
	for (int i=0; i<n; i++){
		cin >> A[i];
	}
	for (int i=1; i<=m; i++){
		bool check = true;
		for (int j=0; j<n; j++){
			if (ucln(i, A[j]) != 1){
				check = false;
				break;
			}
		}
		if (check){
			C[i] = 1;
			cnt++;
		}
	}
	cout << cnt << endl;
	for (int i=1; i<=m; i++){
		if (C[i] == 1){
			cout << i << " ";
		}
	}
	return 0;
} 
