#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	unsigned long long sum = 0;
	unsigned long long ans = 1;
	for (int i=1; i<=n; i++){
		ans *= i;
		sum += ans;
	}
	cout << sum;
	return 0;
}
