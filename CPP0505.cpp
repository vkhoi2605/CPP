#include <iostream>

using namespace std;

struct NhanVien{
	string hoTen;
	string gt;
	string ngaySinh;
	string dc;
	string mst;
	string ngayKy;
	string mnv = "00001";
};

void nhap(NhanVien &nv){
	getline(cin, nv.hoTen);
	getline(cin, nv.gt);
	getline(cin, nv.ngaySinh);
	getline(cin, nv.dc);
	getline(cin, nv.mst);
	getline(cin, nv.ngayKy);
}

void in(NhanVien &nv){
	cout << nv.mnv << " " << nv.hoTen << " " << nv.gt << " " << nv.ngaySinh << " " << nv.dc << " " << nv.mst << " " << nv.ngayKy;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
