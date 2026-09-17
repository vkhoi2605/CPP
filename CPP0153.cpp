#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		long long k;
		cin >> n >> k;
		int sum = 0;
		for (int i=1; i<=n; i++){
			sum += i % k;
		}
		cout << sum << endl;
	}
	return 0;
}
