#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int leng = s.length();
		bool check = false;
		if (s[leng - 6] < s[leng - 5] && s[leng - 5] < s[leng - 4] && s[leng - 4] < s[leng - 2] && s[leng - 2] < s[leng - 1]){
			check = true;
		} else if (s[leng - 6] == s[leng - 5] && s[leng - 5] == s[leng - 4] && s[leng - 4] == s[leng - 2] && s[leng - 2] == s[leng - 1]) {
			check = true;
		} else if (s[leng - 6] == s[leng - 5] && s[leng - 5] == s[leng - 4] && s[leng - 2] == s[leng - 1]) {
			check = true;
		} else if ((s[leng - 6] == '6' || s[leng - 6] == '8') && (s[leng - 5] == '6' || s[leng - 5] == '8') && (s[leng - 4] == '6' || s[leng - 4] == '8') && (s[leng - 2] == '6' || s[leng - 2] == '8') && (s[leng - 1] == '6' || s[leng - 1] == '8')) {
			check = true;
		} else {
			check = false;
		}
		if (check) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
