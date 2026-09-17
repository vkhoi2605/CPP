#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, d;
		cin >> n >> d;
		d %= n;
		int A[n];
		for (int i=0; i<n; i++){
			cin >> A[i];
		}
		for (int i=d; i<n; i++){
			cout << A[i] << " ";
		}
		for (int i=0; i<d; i++){
			cout << A[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
