#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct SinhVien{
	string msv = "N20DCCN001";
	string hoTen;
	string lop;
	string ngaySinh;
	float GPA;
};

void nhapThongTinSV(SinhVien &a){
	getline(cin, a.hoTen);
	getline(cin, a.lop);
	getline(cin, a.ngaySinh);
	cin >> a.GPA;
	cin.ignore();
}

void chuanHoa(string &s){
	if (s[2] != '/'){
		s.insert(0, "0");
	}
	if (s[5] != '/'){
		s.insert(3, "0");
	}
}

void inThongTinSV(SinhVien &a){
	chuanHoa(a.ngaySinh);
	cout << a.msv << "\t" << a.hoTen << "\t" << a.lop << "\t" << a.ngaySinh << "\t";
	cout << fixed << setprecision(2) << a.GPA;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
