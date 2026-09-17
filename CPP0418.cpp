#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int A[n], B[m], C1[100002], C2[100002];
		memset(C1, 0, sizeof(C1));
		memset(C2, 0, sizeof(C2));
		for (int i=0; i<n; i++){
			cin >> A[i];
			C1[A[i]]++;
		}
		for (int i=0; i<m; i++){
			cin >> B[i];
			C2[B[i]]++;
		}
		for (int i=1; i<=100000; i++){
			if (C1[i] >= 1 || C2[i] >= 1){
				cout << i << " ";
			}
		}
		cout << endl;
		bool check = false; 
		for (int i=1; i<=100000; i++){
			if (C1[i] >= 1 && C2[i] >= 1){
				cout << i << " ";
				check = true;
			}
		}
		if (check){
			cout << endl;
		} 
	}
	return 0;
}
