#include <iostream>
#include <math.h>

using namespace std;

long long luythua(int a, int b){
	long long ans = 1;
	for (int i=1; i<=b; i++){
		ans *= a;
		ans %= 1000000007;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, x;
		cin >> n >> x;
		int A[n];
		for (int i=n-1; i>=0; i--)
			cin >> A[i];
		long long P = 0;
		for (int i=n-1; i>=0; i--){
			P += A[i] * luythua(x, i);
			P %= 1000000007;
		}
		cout << P << endl;
	}
	return 0;
}
