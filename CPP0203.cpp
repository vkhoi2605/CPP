#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n];
		bool C[1000000];
		memset(C, false, sizeof(C));
		for (int i=0; i<n; i++){
			cin >> A[i];
			if (A[i] >= 1 && A[i] <= 1000000)
				C[A[i]] = true;
		}
		bool check = false;
		for (int i=1; i<=1000000; i++){
			if (!C[i]){
				cout << i << endl;
				check = true;
				break;
			}
		}
		
//	C1.
//		sort (A, A + n);
//		int maxVal = A[n-1];
//		for (int i=1; i<=maxVal+1; i++){
//			bool check = false;
//			for (int j=0; j<n; j++){
//				if (A[j] == i){
//					check = true;
//					break;
//				}
//			}
//			if (!check){
//				cout << i << endl;
//				break;
//			}
//		}

// 	C2. Danh dau phan tu mang A
		
	}
	return 0;
}
