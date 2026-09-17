#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

using namespace std;

int main(){
	ifstream f;
	f.open("DATA.in");
	map<int, int> mp;
	while (!f.eof()){
		string s;
		f >> s;
		int tmp;
		stringstream ss(s);
		while (ss >> tmp){
			mp[tmp]++;
		}
	}
	for (auto i : mp){
		cout << i.first << " " << i.second << endl;
	}
	f.close();
	return 0;
}
