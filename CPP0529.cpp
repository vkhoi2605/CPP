#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct SinhVien{
	string stt, msv, hoTen, lop, email, dn;
};

void nhap(SinhVien SV[], int n){
	for (int i=0; i<n; i++){
		SV[i].stt = to_string(i + 1);
		getline(cin, SV[i].msv);
		getline(cin, SV[i].hoTen);
		getline(cin, SV[i].lop);
		getline(cin, SV[i].email);
		getline(cin, SV[i].dn);
	}
}

bool cmp(SinhVien a, SinhVien b){
	return a.msv < b.msv;
}

void sapxep(SinhVien SV[], int n){
	sort (SV, SV + n, cmp);
}

void in(SinhVien SV[], int n, string s){
	for (int i=0; i<n; i++){
		if (SV[i].dn == s){
			cout << SV[i].stt << " " << SV[i].msv << " " << SV[i].hoTen << " " << SV[i].lop << " " << SV[i].email << " " << SV[i].dn << endl;
		}
	}
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	SinhVien SV[n];
	nhap(SV, n);
	sapxep(SV, n);
	int Q;
	cin >> Q;
	cin.ignore();
	for (int i=0; i<Q; i++){
		string s;
		getline(cin, s);
		in(SV, n, s);
	}
	return 0;
}
