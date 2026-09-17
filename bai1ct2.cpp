#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int res = 0, pos;
		for (int i=0; i<s.length()-1; i++){
			int l = i, r = i + 1;
			while (l >= 0 && r < s.length() && s[l] == s[r]){
				if (res < r - l +1){
					res = r - l + 1;
					pos = l;
				}
				l--; r++;
			}
		}
		if (res != 0){
			cout << s.substr(pos, res);
		} else {
			cout << "No";
		}
		cout << endl;
	}
	return 0;
}
