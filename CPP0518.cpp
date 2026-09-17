#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

struct NhanVien{
	string mnv, hoTen, gt, ngaySinh, dc, mst, ngayKy;
};

void nhap(NhanVien &ds){
	cin.ignore();
	getline(cin, ds.hoTen);
	getline(cin, ds.gt);
	getline(cin, ds.ngaySinh);
	getline(cin, ds.dc);
	cin >> ds.mst >> ds.ngayKy;
	static int cnt = 0; 
	if (cnt < 9){
		ds.mnv = "0000" + to_string(cnt + 1);
	} else if (cnt < 99){
		ds.mnv = "000" + to_string(cnt + 1);
	} else {
		ds.mnv = "00" + to_string(cnt + 1);
	}
	cnt++;
}

void inds(NhanVien ds[],int N){
	for (int i=0; i<N; i++){
		cout << ds[i].mnv << " " << ds[i].hoTen << " " << ds[i].gt << " " << ds[i].ngaySinh << " " << ds[i].dc << " " << ds[i].mst << " " << ds[i].ngayKy << endl;
	}
}

bool cmp(NhanVien &a, NhanVien &b){
	stringstream ss1(a.ngaySinh), ss2(b.ngaySinh);
	int d1, m1, y1, d2, m2, y2;
	string tmp;
	getline(ss1, tmp, '/');
	d1 = stoi(tmp);
	getline(ss1, tmp, '/');
	m1 = stoi(tmp);
	getline(ss1, tmp, '/');
	y1 = stoi(tmp);
	getline(ss2, tmp, '/');
	d2 = stoi(tmp);
	getline(ss2, tmp, '/');
	m2 = stoi(tmp);
	getline(ss2, tmp, '/');
	y2 = stoi(tmp);
	if (y1 != y2)
		return y1 < y2;
	if (m1 != m2)
		return m1 < m2;
	return d1 < d2;
}

void sapxep(NhanVien ds[], int N){
	sort (ds, ds + N, cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
