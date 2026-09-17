#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class NhanVien{
	private:
		static int cnt;
		string mnv, hoTen, gt, ngaySinh, dc, mst, ngayKy;
	public:
		NhanVien(){
			++cnt;
			if (cnt < 10){
				mnv = "0000" + to_string(cnt);
			} else if (cnt < 100){
				mnv = "000" + to_string(cnt);
			} else {
				mnv = "00" + to_string(cnt);
			}
			hoTen = "";
			gt = "";
			ngaySinh = "";
			dc = "";
			mst = "";
			ngayKy = "";
		}
	friend istream& operator >> (istream& cin, NhanVien &nv){
		cin.ignore();
		getline(cin, nv.hoTen);
		getline(cin, nv.gt);
		getline(cin, nv.ngaySinh);
		getline(cin, nv.dc);
		cin >> nv.mst >> nv.ngayKy;
		return cin;
	}
	friend ostream& operator << (ostream& cout, NhanVien &nv){
		cout << nv.mnv << " " << nv.hoTen << " " << nv.gt << " " << nv.ngaySinh << " " << nv.dc << " " << nv.mst << " " << nv.ngayKy << endl;
		return cout;
	}
};

int NhanVien::cnt = 0;

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
