#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	for (int i=0; i<s.length(); i++){
		if ('A' <= s[i] && s[i] <= 'Z')
			s[i] += 32;
	}
	stringstream ss(s);
	string tmp;
	while (ss >> tmp){
		tmp[0] -= 32;
		cout << tmp << " ";
	}
	return 0;
}
