#include <iostream>
#include <string.h>
#include <map>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
//	C1: Bieu dien du lieu chuoi thong qua KDL char
//		char s[100002];
//		cin >> s;
//		int cnt[256] = {0};
//		for (int i=0; i<strlen(s); i++){
//			cnt[s[i]]++;
//		}
//		for (int i=0; i<strlen(s); i++){
//			if (cnt[s[i]] == 1)
//				cout << s[i];
//		}
//		cout << endl;

//	C2: Bieu dien du chuoi thong qua KDL string
//		string s;
//		cin >> s;
//		int cnt[256] = {0};
//		for (int i=0; i<s.length(); i++){
//			cnt[s[i]]++;
//		}
//		for (int i=0; i<s.size(); i++){
//			if (cnt[s[i]] == 1)
//				cout << s[i];
//		}
//		cout << endl;
//	C3: sd map (cach nay in theo bang chu cai)
		string s;
		cin >> s;
		map<char, int> mp;
		for (int i=0; i<s.length(); i++){
			mp[s[i]]++;
		}
		for (auto i: mp){
			if (i.second == 1)
			cout << i.first;
		}
		cout << endl;
	}
	return 0;
}
