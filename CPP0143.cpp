#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long F[n+1];
		F[1] = F[2] = 1;
		for (int i=3; i<=n; i++){
			F[i] = F[i-1] + F[i-2];
		}
		cout << F[n] << endl;
	}
	return 0;
}
