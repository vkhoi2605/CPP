#include <iostream>

using namespace std;

int main(){
	short t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		long long sum = 0;
		for (int i=0; i<s.size(); i++){
			while (s[i] == '0' && s[i+1] == '8' && s[i+2] == '4')
				i += 3;
			if ('0' <= s[i] && s[i] <= '9'){
				sum = sum * 10 + s[i] - 48;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
