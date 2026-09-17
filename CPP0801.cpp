#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	fstream f1, f2;
	f1.open("PTIT.in", ios::in);
	f2.open("PTIT.out", ios::out);
	
//	string s;
//	while (getline(f1, s)){
//		f2 << s << endl;
//	}

	stringstream ss;
	ss << f1.rdbuf();
	f2 << ss.str();
	
	f1.close();
	f2.close();
	return 0;
}
