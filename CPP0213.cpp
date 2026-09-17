#include <iostream>

using namespace std;

bool checkF(int n, int F[]){
	for (int i=0; i<40; i++){
		if (n == F[i]){
			return true;
		} else if (F[i] > n){
			return false;
		}
	}
	return false; 
}

int main(){
	int t;
	cin >> t;
	int F[40];
	F[0] = 0;
	F[1] = 1;
	for (int i=2; i<40; i++){
		F[i] = F[i-1] + F[i-2];
	}
	while (t--){
		int n;
		cin >> n;
		int A[n];
		for (int i=0; i<n; i++){
			cin >> A[i];
		}
		for (int i=0; i<n; i++){
			if (checkF(A[i], F)){
				cout << A[i] << " ";
			}
		}
		cout << endl;
	} 
	return 0;
}
