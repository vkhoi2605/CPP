#include <iostream>
#include <sstream>
#include <cstring>
#include <set>
#include <fstream>

using namespace std;

int main(){
	ifstream f1, f2;
	f1.open("DATA1.in");
	f2.open("DATA2.in");
	string s;
	set<string> hop, set1, giao;
	while (f1 >> s){
		for (int i=0; i<s.length(); i++){
			s[i] = tolower(s[i]);
		}
		hop.insert(s);
		set1.insert(s);
	}
	while (f2 >> s){
		for (int i=0; i<s.length(); i++){
			s[i] = tolower(s[i]);
		}
		hop.insert(s);
		if (set1.find(s) != set1.end()){
			giao.insert(s);
		}
	}
	for (auto i : hop){
		cout << i << " ";
	}
	cout << endl;
	for (auto i : giao){
		cout << i << " ";
	}
	cout << endl;
	f1.close();
	f2.close();
	return 0;
}
