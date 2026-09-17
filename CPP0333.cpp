#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	for (int i=0; i<s.length(); i++){
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string tmp, res = "";
	while (ss >> tmp){
		tmp[0] = toupper(tmp[0]);
		res += tmp;
		res += " ";
	}
	int len;
	for (int i=res.length()-2; i>=0; i--){
		if (res[i] == ' '){
			len = i;
			break;
		}
	}
	for (int i=0; i<tmp.length(); i++){
		tmp[i] = toupper(tmp[i]);
	}
	res[len] = ',';
	for (int i=0; i<=len; i++){
		cout << res[i];
	}
	cout << " " << tmp;
	return 0;
}
