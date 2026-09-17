#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstring>

using namespace std;

struct SinhVien{
	string msv;
	string hoTen;
	string lop;
	string ngaySinh;
	float GPA;
};

void nhap(SinhVien ds[], int N){
	cin.ignore();
	for (int i=0; i<N; i++){
		if(i < 9) {
			ds[i].msv = "B20DCCN00" + to_string(i + 1);
		} else {
			ds[i].msv = "B20DCCN0" + to_string(i + 1);
		}
		getline(cin, ds[i].hoTen);
		getline(cin, ds[i].lop);
		getline(cin, ds[i].ngaySinh);
		cin >> ds[i].GPA;
		cin.ignore();
	}
}

string chuanhoaTen(string &s){
	stringstream ss(s);
	string tmp, res = "";
	while (ss >> tmp){
		for (int i=0; i<tmp.length(); i++){
			tmp[i] = tolower(tmp[i]);
		}
		tmp[0] = toupper(tmp[0]);
		res += tmp;
		res += " ";
	}
	res.pop_back();
	return res;
}

void chuanhoaNs(string &s){
	if (s[2] != '/'){
		s.insert(0, "0");
	}
	if (s[5] != '/'){
		s.insert(3, "0");
	}
}

void in(SinhVien ds[], int N){
	for (int i=0; i<N; i++){
		chuanhoaNs(ds[i].ngaySinh);
		cout << ds[i].msv << " " << chuanhoaTen(ds[i].hoTen) << " " << ds[i].lop << " " << ds[i].ngaySinh << " ";
		cout << fixed << setprecision(2) << ds[i].GPA << endl;
 	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
