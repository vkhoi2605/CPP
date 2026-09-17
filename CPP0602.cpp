#include <iostream>
#include <cstring>
#include <iomanip>

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
		void chuanhoaNs(){
			if (ngaySinh[2] != '/'){
				ngaySinh.insert(0, "0");
			}
			if (ngaySinh[5] != '/'){
				ngaySinh.insert(3, "0");
			}
		}
	friend istream& operator >> (istream& cin, SinhVien &SV){
		getline(cin, SV.hoTen);
		getline(cin, SV.lop);
		getline(cin, SV.ngaySinh);
		SV.chuanhoaNs();
		cin >> SV.GPA;
		return cin;
	}
	friend ostream& operator << (ostream& cout, SinhVien &SV){
		cout << SV.msv << " " << SV.hoTen << " " << SV.lop << " " << SV.ngaySinh << " ";
		cout << fixed << setprecision(2) << SV.GPA;
		return cout;
	}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
