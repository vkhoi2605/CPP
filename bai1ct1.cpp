#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n];
		int C[202];
		memset(C, 0, sizeof(C));
		for (int i=0; i<n; i++){
			cin >> A[i];
			C[A[i]] = 1;
		}
		sort (A, A+n);
		bool check = false;
		int maxVal = A[n-1];
		for (int i=1; i<=200; i++){
			if (i < maxVal){
				if (i % 2 == 0 && C[i] == 0)
				{
					cout << i << " ";
					check = true;
				}
			}
		}
		if (!check){
			cout << "Yes";
		}
		cout << endl;
	}
	return 0;
}
