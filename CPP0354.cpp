#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int cnt[256] = {0};
		for (int i=0; i<s.length(); i++){
			cnt[s[i]]++;
		}
		for (int i=0; i<s.length(); i++){
			if (s[i + 1] != s[i])
				cout << s[i] << cnt[s[i]];
		}
		cout <<endl;
	}
	return 0;
}
