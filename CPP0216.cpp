#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n];
		for (int i=0; i<n; i++)
			cin >> A[i];
		int L, R;
		cin >> L >> R;
		bool check = true;
		int maxVal = 0, p = 0;
		for (int i=L; i<=R; i++){
			if (maxVal < A[i]){
				maxVal = A[i];
				p = i;
			}
		}
		for (int i=L; i<p; i++){
			if (A[i+1] - A[i] < 0)
				check = false;
		}
		for (int i=p; i<R; i++){
			if (A[i] - A[i+1] < 0)
				check = false;
		}
		if (check)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
