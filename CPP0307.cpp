#include <iostream>
#include <sstream>
#include <set>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss1(s1), ss2(s2);
		string tmp = "";
		set<string> se1, se2;
		while (ss1 >> tmp){
			se1.insert(tmp);
		}
		tmp = "";
		while (ss2 >> tmp){
			se2.insert(tmp);
		}
		for (auto x : se1){
			if (se2.find(x) == se2.end()){
				cout << x << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
