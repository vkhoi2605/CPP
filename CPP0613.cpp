#include <iostream>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <algorithm>

using namespace std;

class SinhVien{
	private:
		static int cnt;
		string msv, hoTen, ngaySinh, lop;
		float GPA;
	public:
		SinhVien(){
			cnt++;
			if (cnt < 10){
				msv = "B20DCCN00" + to_string(cnt);
			} else if (cnt < 100){
				msv = "B20DCCN0" + to_string(cnt);
			} else {
				msv = "B20DCCN" + to_string(cnt);
			}
			hoTen = "";
			lop = "";
			ngaySinh = "";
			GPA = 0;
		}
		float getGPA(){
			return GPA;
		} 
		void chuanhoaNs(){
			if (ngaySinh[2] != '/'){
				ngaySinh.insert(0, "0");
			}
			if (ngaySinh[5] != '/'){
				ngaySinh.insert(3, "0");
			}
		}
		string chuanhoaTen(SinhVien a){
			stringstream ss(a.hoTen);
			string tmp, res = "";
			while (ss >> tmp){
				for (int i = 0; i < tmp.length(); i++){
					tmp[i] = tolower(tmp[i]);
				}
				tmp[0] = toupper(tmp[0]);
				res += tmp + " ";
			}
			res.pop_back();
			return res;
		}
	friend istream& operator >> (istream& cin, SinhVien &a){
		cin.ignore();
		getline(cin, a.hoTen);
		cin >> a.lop >> a.ngaySinh >> a.GPA;
		a.chuanhoaNs();
		return cin;
	}
	friend ostream& operator << (ostream& cout, SinhVien &a){
		cout << a.msv << " " << a.chuanhoaTen(a) << " " << a.lop << " " << a.ngaySinh << " ";
		cout << fixed << setprecision(2) << a.GPA << endl;
		return cout;
	}
};

int SinhVien::cnt = 0;

bool cmp(SinhVien a, SinhVien b){
	return a.getGPA() > b.getGPA();
}

void sapxep(SinhVien ds[], int N){
	sort (ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
