#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int res = 0;
		for (int i=1; i<=sqrt(n); i++){
			if (n % i == 0){
				if (i != n / i){
					if (i % 2 == 0){
						res++;
					}
					if ((n / i) % 2 == 0){
						res++;
					}
				} else{
					if (i % 2 == 0){
						res++;
					}
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
