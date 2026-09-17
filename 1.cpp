#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	map<string, int> mp;
	string tmp;
	while (ss >> tmp){
		mp[tmp]++;
	}
	for (auto i: mp){
		cout << i.first << "->"<< i.second << endl;
	}
	return 0;
}
