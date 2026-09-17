#include <iostream>
#include <algorithm>

using namespace std;

struct NhanVien{
	string maSo, hoTen;
	float hs;
	int lcb, pc;
	float tongLuong;
};

void NhapNV(NhanVien a[], int n){
	for (int i=0; i<n; i++){
		cin >> a[i].maSo;
		cin.ignore();
		getline(cin, a[i].hoTen);
		cin >> a[i].hs >> a[i].lcb >> a[i].pc; 
	}
}

void InTongLuong(NhanVien a[], int n){
	for (int i=0; i<n; i++){
		float total = a[i].lcb * a[i].hs + a[i].pc;
		a[i].tongLuong = total;
		cout << total << endl;
	}
}

bool cmp(NhanVien x, NhanVien y){
	return x.tongLuong < y.tongLuong;
}

void LuongThapNhat_CaoNhat(NhanVien a[], int n){
	sort(a, a + n, cmp);
	cout << "\n Nhan Vien co tong luong cao nhat: ";
	cout << a[n-1].maSo << " " << a[n-1].hoTen;
	cout << "\n Nhan Vien co tong luong thap nhat: ";
	cout << a[0].maSo << " " << a[0].hoTen; 
}

int main(){
	int n;
	cin >> n;
//	NhanVien a[n]; Dung mang cau truc tinh
//  Dung mang cau truc dong
	NhanVien *a = new NhanVien[n];
	NhapNV(a, n);
	InTongLuong(a, n);
	LuongThapNhat_CaoNhat(a,n);
	delete []a;
	return 0;
}
