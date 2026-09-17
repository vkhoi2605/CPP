#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <map>
#include <set>

using namespace std;

int main(){
	ifstream f;
	f.open("VANBAN.in");
//	C1. Dung map
//	map<string, int> mp;
//	string s;
//	while (getline(f, s)){
//		stringstream ss(s);
//		string tmp;
//		while (ss >> tmp){
//			for (int i=0; i<tmp.length(); i++){
//				tmp[i] = tolower(tmp[i]);
//			}
//			mp[tmp]++;
//		}
//	}
//	for (auto i : mp){
//		cout << i.first << endl;
//	}

//	C2. Dung set
	string s;
	set<string> se;
	while (f >> s){
		for (int i=0; i<s.length(); i++){
			s[i] = tolower(s[i]);
		}
		se.insert(s);
	}
	for (auto i : se){
		cout << i << endl;
	}
	f.close();
	return 0;
}
