#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp, res = "";
	while (ss >> tmp){
		res += tolower(tmp[0]);
	}
	for (int i=0; i<tmp.length(); i++){
		tmp[i] = tolower(tmp[i]);
		cout << tmp[i];
	}
	for (int i=0; i<res.length()-1; i++){
		cout << res[i];
	}
	cout << "@stu.ptit.edu.vn";
	return 0;
}
