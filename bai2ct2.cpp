#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int res = 1, pos;
		for (int i=0; i<s.length(); i++){
			int l = i, r = i;
			while (l >= 0 && r < s.length() && s[l] == s[r]){
				if (res < r - l + 1){
					res = r - l + 1;
					pos = l;
				}
				l--;
				r++;
			}
		}
		if (res == 1){
			cout << s[s.length()-1];
		} else {
			cout << s.substr(pos, res);
		}
		cout << endl;
	}
	return 0;
}
