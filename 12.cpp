#include <iostream>

using namespace std;

struct NhanVien{
	string maSo, hoTen;
	float hs;
	int lcb, pc;
};

int main(){
	// 1. Khai bao con tro cau truc
	NhanVien *ptr = new NhanVien;
	// 2. Nhap NV
	cin >> ptr->maSo;
	cin.ignore();
	getline(cin, ptr->hoTen);
	cin >> ptr->hs >> ptr->lcb >> ptr->pc;
	// 3. Tinh tong luong
	float total = ptr->lcb * ptr->hs + ptr->pc;
	
	cout << total;
	// 4. Giai phong vung nho
	delete ptr;
	return 0;
}
