#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int cnt = 0;
		bool check = false;
		for (int i=2; i<=sqrt(n); i++){
			while (n % i == 0){
				n /= i;
				cnt++;
				if (cnt == k){
					check = true;
					cout << i;
					break;
				}
			}
		}
		if (k == cnt + 1 && n > 1){
			cout << n;
		}
		else if (!check){
			cout << "-1";
		}
		cout << endl;
	}
	return 0;
}
