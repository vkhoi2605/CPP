#include <iostream>
#include <cstring>
#include <iomanip>
#include <sstream>

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
		string getTen(){
			return hoTen;
		}
		string chuanhoaTen(SinhVien a){
			stringstream ss(a.getTen());
			string tmp, res = "";
			while (ss >> tmp){
				for (int i=0; i<tmp.length(); i++){
					tmp[i] = tolower(tmp[i]);
				}
				tmp[0] = toupper(tmp[0]);
				res += tmp + " ";
			}
			res.pop_back();
			return res;
		}
		void chuanhoaNs(){
			if (ngaySinh[2] != '/'){
				ngaySinh.insert(0, "0");
			}
			if (ngaySinh[5] != '/'){
				ngaySinh.insert(3, "0");
			}
		}
	friend istream& operator >> (istream& cin, SinhVien &a){
		getline(cin, a.hoTen);
		getline(cin, a.lop);
		getline(cin, a.ngaySinh);
		a.chuanhoaNs();
		cin >> a.GPA;
		return cin;
	}
	friend ostream& operator << (ostream& cout, SinhVien a){
		cout << a.msv << " " << a.chuanhoaTen(a) << " " << a.lop << " " << a.ngaySinh << " ";
		cout << fixed << setprecision(2) << a.GPA;
		return cout;
	}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
