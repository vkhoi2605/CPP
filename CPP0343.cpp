#include <iostream>
#include <sstream>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		int n, dem = 0, demc = 0, deml = 0;
		while (ss >> n){
			dem++;
			if (n % 2 == 0){
				demc++;
			} else {
				deml++;
			}
		}
		if ((dem % 2 == 0 && demc > deml) || (dem % 2 != 0 && demc < deml)){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
