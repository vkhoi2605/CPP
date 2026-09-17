#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct NhanVien{
	string mnv, hoTen, ngaySinh;
	float dtb, ythuc;
};

void nhap(NhanVien nv[], int n){
	cin.ignore();
	for (int i=0; i<n; i++){
		if(i < 9){
			nv[i].mnv = "NV00" + to_string(i + 1);
		} else if(i < 99) {
			nv[i].mnv = "NV0" + to_string(i + 1);
		} else {
			nv[i].mnv = "NV" + to_string(i + 1);
		}
		getline(cin, nv[i].hoTen);
		cin >> nv[i].ngaySinh >> nv[i].dtb >> nv[i].ythuc;
		cin.ignore();
	}
}

bool cmp(NhanVien &x, NhanVien &y){
	return x.ythuc > y.ythuc;
}

void in(NhanVien nv[], int n){
	sort (nv, nv + n, cmp);
	for (int i=0; i<n; i++){
		if (nv[i].dtb >= 8 && nv[i].ythuc > 90){
			cout << nv[i].mnv << " " << nv[i].hoTen << " " << nv[i].ngaySinh << " " << nv[i].dtb << " " << nv[i].ythuc << endl;
		}
	}
}

int main(){
	int n;
	cin >> n;
	NhanVien nv[n];
	nhap(nv, n);
	in(nv, n);
	return 0;
}
