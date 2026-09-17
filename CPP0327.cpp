#include <iostream>
#include <string>

using namespace std;

int luythua(int n){
	int res = 1;
	for (int i=1; i<=n; i++){
		res *= -1;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		if (s.length() % 2 != 0){
			s = "0" + s;
		}
		int cnt = 0, res = 0;
		for (int i=0; i<s.length(); i+=2){
			if (s[i] == '1' && s[i+1] == '1'){
				res += luythua(cnt++) * 3;
			} else if (s[i] == '1' && s[i+1] == '0'){
				res += luythua(cnt++) * 2;
			} else if (s[i] == '0' && s[i+1] == '1'){
				res += luythua(cnt++) * 1;
			} else {
				res += luythua(cnt++) * 0;
			}
		}
		if (res % 5 == 0){
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
	return 0;
}
