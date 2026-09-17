#include <iostream>
#include <math.h>
#define ll long long

using namespace std;

ll ucln(ll a, ll b){
	while (b != 0){
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

ll bcnn(ll a, ll b){
	return a * b / ucln(a, b);
}

ll luythua(ll x, ll y){
	ll ans = 1;
	for (int i=1; i<=y; i++){
		ans *= x;
	}
	return ans;
} 

int main(){
	int t;
	cin >> t;
	while (t--){
		int x, y, z, N;
		cin >> x >> y >> z >> N;
		long long bc = bcnn(x, bcnn(y, z));
		long long res = (luythua(10, N-1) + bc - 1) / bc;
		res *= bc;
		if (res < luythua(10, N) && N >= 0){
			cout << res;
		} else {
			cout << "-1";
		}
		cout << endl;
	}
	return 0;
}
