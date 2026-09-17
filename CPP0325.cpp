#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cin.ignore();
		int n = 0;
		for (int i=0; i<s.length(); i++){
			if (i % 2 == 0){
				n += s[i] - 48;
			} else {
				n -= s[i] - 48;
			}
		}
		if (n % 11 == 0){
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
	return 0;
}
