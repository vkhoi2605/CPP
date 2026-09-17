#include <iostream>

using namespace std;

struct NhanVien{
	string mnv, hoTen, gt, ngaySinh, address, ms, ngayKy;
};

void nhap(NhanVien &ds){
	cin.ignore(); 
	getline(cin, ds.hoTen);
	getline(cin, ds.gt);
	getline(cin, ds.ngaySinh);
	getline(cin, ds.address);
	getline(cin, ds.ms);
	cin >> ds.ngayKy;
}

void inds(NhanVien ds[], int N){
	for (int i=0; i<N; i++){
		if (i < 9){
			ds[i].mnv = "0000" + to_string(i + 1);
		} else {
			ds[i].mnv = "000" + to_string(i + 1);
		}
		cout << ds[i].mnv << " " << ds[i].hoTen << " " << ds[i].gt << " " << ds[i].ngaySinh << " " << ds[i].address << " " << ds[i].ms << " " << ds[i].ngayKy << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
