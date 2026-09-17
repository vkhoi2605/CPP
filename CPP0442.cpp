#include <iostream>
#include <set>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, X;
		cin >> n >> X;
		int A[n];
		set<int> se;
		for (int i=0; i<n; i++){
			cin >> A[i];
			se.insert(A[i]);
		}
		if (se.count(X) > 0){
			cout << "1";
		} else {
			cout << "-1";
		}
		cout << endl;
	}
	return 0;
} 
