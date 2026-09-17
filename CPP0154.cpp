#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		long long K;
		cin >> n >> K;
		int sum = n * (n + 1) / 2;
		if (sum == K)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
