#include <iostream>

using namespace std;

class NhanVien{
	private:
		string mnv, hoTen, gt, ngaySinh, dc, mst, ngayKy;
	public:
		NhanVien(){
			mnv = "00001";
			hoTen = "";
			gt = "";
			ngaySinh = "";
			dc = "";
			mst = "";
			ngayKy = "";
		}
	friend istream& operator >> (istream& cin, NhanVien &a){
		getline(cin, a.hoTen);
		getline(cin, a.gt);
		getline(cin, a.ngaySinh);
		getline(cin, a.dc);
		cin >> a.mst >> a.ngayKy;
		return cin;
	}
	friend ostream& operator << (ostream& cout, NhanVien &a){
		cout << a.mnv << " " << a.hoTen << " " << a.gt << " " << a.ngaySinh << " " << a.dc << " " << a.mst << " " << a.ngayKy;
		return cout; 
	}
};
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
