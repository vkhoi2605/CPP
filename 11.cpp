#include <iostream>

using namespace std;

struct Employee{
	string maNV;
	string hoten;
	float hs;
	int lcb;
	float pc;
};

void NhapNV(Employee &e){
	cin >> e.maNV;
	cin.ignore();
	getline(cin, e.hoten);
	cin >> e.hs;
	cin >> e.lcb;
	cin >> e.pc;
}

float InTongLuong(Employee e){
	return e.lcb * e.hs + e.pc;
}

int main(){
	//1. Input
	Employee e1;
	
	//2. Process
	NhapNV(e1);
	float tongLuong = InTongLuong(e1);
	
	//3. Output
	cout << tongLuong;
	return 0;
}
