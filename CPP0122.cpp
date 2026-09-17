#include <iostream>

using namespace std;

long long ucln(long long a, long long b){
	if (a < b){
		int temp = a;
		a = b;
		b = temp;
	}
	while (b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long bcnn(long long a, long long b){
	return (long long)a * b / ucln(a, b);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long ans = 1;
		for (int i=2; i<=n; i++)
			ans = bcnn(ans, i);
		cout << ans << endl;
	}
	return 0;
}
