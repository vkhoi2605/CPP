#include <iostream>

using namespace std;

int main(){
	short t;
	cin >> t;
	while (t--){
		int n, Q;
		cin >> n >> Q;
		int A[n];
		for (int i=0; i<n; i++){
			cin >> A[i];
		}
		for (int i=0; i<Q; i++)
		{
			int L, R;
			cin >> L >> R;
			int sum = 0;
			for (int j=L-1; j<=R-1; j++){
				sum += A[j];
			}
			cout << sum << endl;
		}
	}
	return 0;
}
