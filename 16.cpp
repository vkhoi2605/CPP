#include <iostream>
#include <fstream>

using namespace std;

struct NhanVien{
	char maNV[20], hoTen[30];
	float hs;
	int lcb, pc;
};

//void NhapNV(){
//	int n;
//	cin >> n;
//	fstream f;
//	f.open("NhanVien.txt", ios::out | ios::binary);
//	for (int i=0; i<n; i++){
//		NhanVien e;
//		cin >> e.maNV;
//		cin.ignore();
//		gets(e.hoTen);
//		cin >> e.hs >> e.lcb >> e.pc;
////		f << e.maNV << endl;
////		f << e.hoTen << endl;
////		f << e.hs << endl << e.lcb << endl << e.pc << endl;
//		
//		f.write(reinterpret_cast<char*> (&e), sizeof(NhanVien));
//		
//	}
//	
//	f.close(); 
//}

void DocNV(){
	fstream f;
	f.open("NhanVien.txt", ios::in | ios::binary);
	NhanVien e;
//	while (f >> e.maNV){
//		f.ignore();
//		getline(f, e.hoTen);
//		f >> e.hs >> e.lcb >> e.pc;
//		cout << e.maNV << " co tong luong = " << e.lcb * e.hs + e.pc << endl;
//	}

	while (f.read(reinterpret_cast<char*> (&e), sizeof(NhanVien))){
		cout << e.maNV << " " << e.lcb * e.hs + e.pc << endl;
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
