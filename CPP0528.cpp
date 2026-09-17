#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct SinhVien{
	int stt;
	string msv, hoTen, lop, email, dn;
};

void nhap(SinhVien sv[], int n){
	for (int i=0; i<n; i++){
		sv[i].stt = i + 1;
		cin >> sv[i].msv;
		cin.ignore();
		getline(cin, sv[i].hoTen);
		cin >> sv[i].lop;
		cin >> sv[i].email;
		cin >> sv[i].dn;
	}
}

bool cmp(SinhVien &x, SinhVien &y){
	return x.hoTen < y.hoTen;
}

void in(SinhVien sv[], int n, string s){
	for (int i=0; i<n; i++){
		if (sv[i].dn == s){
			cout << sv[i].stt << " " << sv[i].msv << " " << sv[i].hoTen << " " << sv[i].lop << " " << sv[i].email << " " << sv[i].dn << endl;
		}
	}
}

int main(){
	int n;
	cin >> n;
	SinhVien sv[n];
	nhap(sv, n);
	sort (sv, sv + n, cmp);
	int q;
	cin >> q;
	cin.ignore();
	while (q--){
		string dn;
		getline(cin, dn);
		in(sv, n, dn);
	}
	return 0;
}
