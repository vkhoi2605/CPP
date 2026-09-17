#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int x, y, P;
		cin >> x >> y >> P;
		long long ans = 1;
		for (int i=0; i<y; i++){
			ans *= x;
			ans %= P;
		}
		cout << ans << endl;
	}
	return 0;
}
