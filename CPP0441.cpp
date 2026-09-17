#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, X;
		cin >> n >> X;
		int A[n];
		bool check = false;
		for (int i=0; i<n; i++){
			cin >> A[i];
			if (A[i] == X && !check){
				cout << i + 1;
				check = true;
			}
		}
		if (!check){
			cout << "-1";
		}
		cout << endl;
	}
	return 0;
}
