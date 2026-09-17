#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	long long F[100];
	F[0] = 0;
	F[1] = 1;
	for (int i=2; i<=93; i++){
		F[i] = F[i - 1] + F[i - 2];
	} 
	while (t--){
		long long n;
		cin >> n;
		bool check = false;
		for (int i=0; i<=93; i++){
			if (F[i] > n){
				break;
			} else if (n == F[i]) {
				check = true;
				break; 
			}
		}
		if (check) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
} 
