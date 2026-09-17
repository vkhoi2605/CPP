#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class SinhVien{
	private:
		string msv, hoTen, lop, ngaySinh;
		float GPA;
	public:
		SinhVien(){
			msv = "B20DCCN001";
			hoTen = "";
			lop = "";
			ngaySinh = "";
			GPA = 0;
		}
		void nhap(){
			getline(cin, hoTen);
			cin >> lop >> ngaySinh >> GPA;
			if (ngaySinh[1] == '/') {
				ngaySinh.insert(0, "0");
			}
			if (ngaySinh[4] == '/'){
				ngaySinh.insert(3, "0");
			}
		}
		void xuat(){
			cout << msv << " " << hoTen << " " << lop << " " << ngaySinh << " ";
			cout << fixed << setprecision(2) << GPA;
		}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
