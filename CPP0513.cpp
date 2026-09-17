#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct SinhVien{
	string maSV, hoTen, lop, ngaySinh;
	float GPA;
};

void nhap(SinhVien ds[], int N){
	for (int i=0; i<N; i++){
		cin.ignore();
		if (i < 9){
			ds[i].maSV = "B20DCCN00" + to_string(i+1);
		} else {
			ds[i].maSV = "B20DCCN0" + to_string(i+1);
		}
		getline(cin, ds[i].hoTen);
		cin >> ds[i].lop >> ds[i].ngaySinh >> ds[i].GPA;
		if (ds[i].ngaySinh[1] == '/') ds[i].ngaySinh.insert(0, "0");
		if (ds[i].ngaySinh[4] == '/') ds[i].ngaySinh.insert(3, "0");
	}
}

void in(SinhVien ds[], int N){
	for (int i=0; i<N; i++){
		cout << ds[i].maSV << " " << ds[i].hoTen << " " << ds[i].lop << " " << ds[i].ngaySinh << " ";
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
