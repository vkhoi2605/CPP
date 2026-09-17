#include <iostream>
#include <map>
#include <string.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		int sum = 0;
		map<char, int> mp;
		for (int i=0; i<s.length(); i++){
			if ('0' <= s[i] && s[i] <= '9'){
				sum += (s[i] - '0');
			} else {
				mp[s[i]]++;
			}
		}
		for (auto i: mp){
			for (int j=1; j<=i.second; j++){
				cout << i.first;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
