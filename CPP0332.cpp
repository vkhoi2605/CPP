#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string s;
	getline (cin, s);
	stringstream ss(s);
	string tmp, res = "";
	while (ss >> tmp){
		for (int i=0; i<tmp.length(); i++){
			tmp[i] = tolower(tmp[i]);
		}
		res += tmp[0];
	}
	res = tmp + res;
	for (int i=0; i<res.length()-1; i++){
		cout << res[i];
	}
	cout << "@ptit.edu.vn";
	return 0;
} 
