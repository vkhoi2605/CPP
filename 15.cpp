#include <iostream>
#include <fstream>

using namespace std;

struct NhanVien{
	string maNV, hoTen;
	float hs;
	int lcb, pc;
};

//void NhapNV(){
//	int n;
//	cin >> n;
//	fstream f;
//	f.open("NhanVien.txt", ios::out);
//	for (int i=0; i<n; i++){
//		NhanVien e;
//		cin >> e.maNV;
//		cin.ignore();
//		getline(cin, e.hoTen);
//		cin >> e.hs >> e.lcb >> e.pc;
//		f << e.maNV << endl;
//		f << e.hoTen << endl;
//		f << e.hs << endl << e.lcb << endl << e.pc << endl;
//	}
//}

void DocNV(){
	fstream f;
	f.open("NhanVien.txt", ios::in);
	NhanVien e;
	while (f >> e.maNV){
		f.ignore();
		getline(f, e.hoTen);
		f >> e.hs >> e.lcb >> e.pc;
		cout << e.maNV << " co tong luong = " << e.lcb * e.hs + e.pc << endl;
	}	
}

int main(){
//	Input
	
//	Process
//	NhapNV();
	
//	Output
	DocNV();
	return 0;
}
