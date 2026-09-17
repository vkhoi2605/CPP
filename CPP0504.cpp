#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct SinhVien{
	string hoTen;
	string lop;
	string ngaySinh;
	float GPA;
	string msv = "B20DCCN001";
};

void chuanhoa(SinhVien &sv){
	if (sv.ngaySinh[2] != '/' ){
		sv.ngaySinh.insert(0, "0");
	} 
	if (sv.ngaySinh[5] != '/'){
		sv.ngaySinh.insert(3, "0");
	}
} 

void nhap(SinhVien &sv){
	getline(cin, sv.hoTen);
	getline(cin, sv.lop);
	getline(cin, sv.ngaySinh);
	cin >> sv.GPA;
}

void in(SinhVien &sv){
	chuanhoa(sv);
	cout << sv.msv << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " ";
	cout << fixed << setprecision(2) << sv.GPA;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

