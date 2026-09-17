#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> mp;
	while (t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp, res = "";
		while (ss >> tmp){
			for (int i=0; i<tmp.length(); i++){
				tmp[i] = tolower(tmp[i]);
			}
			res += tmp[0];
		}
		mp[res]++;
		cout << tmp;
		for (int i=0; i<res.length()-1; i++){
			cout << res[i];
		}
		if (mp[res] >= 2){
			cout << mp[res];
		}
		cout << "@ptit.edu.vn" << endl;
	}
	return 0;
}
