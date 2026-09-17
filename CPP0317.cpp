#include <iostream>

using namespace std;

bool checkTN(string s){
	for (int i=0; i<s.length()/2; i++){
		if (s[i] % 2 != 0 || s[i] != s[s.length()-1-i])
			return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	while (n--){
		string s;
		cin >> s;
		if (checkTN(s)){
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
	return 0;
}
