#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int C[1002] = {0};
		bool check = true;
		for (int i=0; i<s.length(); i++){
			if (s[0] == '0' || ('0' > s[i] || '9' < s[i])){
				cout << "INVALID";
				check = false;
				break;
			}
			C[s[i]]++;
		}
		if (check) {
			bool check = true;
			for (int i='0'; i<='9'; i++){
				if (C[i] == 0){
					cout << "NO";
					check = false;
					break;
				}
			}
			if (check) {
				cout << "YES";
			}
		}
		cout << endl;
	}
	return 0;
}
