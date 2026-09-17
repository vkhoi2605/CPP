#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string s, x;
	getline(cin, s);
	getline(cin, x);
	stringstream ss(s);
	string tmp;
	while (ss >> tmp){
		if (tmp != x)
			cout << tmp << " ";
	}
	return 0;
}
