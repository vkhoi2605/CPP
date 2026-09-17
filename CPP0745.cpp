#include <iostream>

using namespace std;

int main(){
	long long F[1002];
	F[0] = 0;
	F[1] = 1;
	for (int i=2; i<=1000; i++){
		F[i] = F[i-1] + F[i-2];
		F[i] = F[i] % (1000000000 + 7);
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << F[n] << endl;
	}
	return 0;
}
