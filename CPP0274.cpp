#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n];
		vector<int> C(1000001, 0);
		int ans = 0;
		for (int i=0; i<n; i++){
			cin >> A[i];
			C[A[i]]++;
		}
		for (int i=0; i<C.size(); i++){
			if (C[i] > 1)
				ans += C[i];
		}
		cout << ans << endl;
	}
	return 0;
}
