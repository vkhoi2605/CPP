// Lam viec voi file:
// B1. Mo file; B2. Doc/Ghi du lieu vao file; B3. Dong file

#include <iostream>
#include <fstream>

using namespace std;

int main(){
////	B1. Mo file de ghi
//	ofstream f;
//	f.open("Test.txt");
//	
////	B2. Ghi du lieu vao file
//	string s;
//	getline(cin, s);
//	
//	f << s;
//	
////	B3. Dong file
//	f.close();
	
//	B1. Mo file
//	ifstream f;
//	f.open("Test.txt");
//	
////	B2. Doc du lieu tu file
//	string s;
////	f >> s // cin >> s
//	while (getline(f, s)){
//		cout << s << endl;
//	}
//	
////	B3. Dong file
//	f.close();
	
	fstream f;
	f.open("Test.txt", ios::in);
	
	string s;
	while (getline(f, s)){
		cout << s;
	}
	
	f.close();
	return 0;
} 
