#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp, res = "";
		while (ss >> tmp){
			res = tmp + " " + res;
		}
		cout << res << endl;
	}
	return 0;
}
