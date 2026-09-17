#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

class SinhVien{
	private:
		string msv, hoTen, lop, email;
	public:
//		SinhVien(string msv, string hoTen, string lop, string email){
//			this->msv = msv;
//			this->hoTen = hoTen;
//			this->lop = lop;
//			this->email = email;
//		}
		void nhapSV(){
			cin >> msv;
			cin.ignore();
			getline(cin, hoTen);
			cin >> lop >> email;
		}
		void InSinhVien(){
			cout << msv << " " << hoTen << " " << lop << " " << email << endl;
		}
		string getlop(){
			return lop;
		}
		string getMa(){
			return msv;
		}
};

bool cmp(SinhVien a, SinhVien b){
	if (a.getlop() != b.getlop()){
		return a.getlop() < b.getlop();
	} else {
		return a.getMa() < b.getMa();
	}
}

int main(){
	int n;
	cin >> n;
	SinhVien arr[n];
	for (int i=0; i<n; i++){
		arr[i].nhapSV();
	}
	sort (arr, arr + n, cmp);
	for (int i=0; i<n; i++){
		arr[i].InSinhVien();
	}
	return 0;
}
