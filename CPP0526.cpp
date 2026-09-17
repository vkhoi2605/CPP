#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

struct List{
	string hoTen, ngaySinh;
};

void nhap(List &a){
	cin >> a.hoTen >> a.ngaySinh;
}

bool cmp(List a, List b){
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
	if (y1 != y2) return y1 > y2;
	if (m1 != m2) return m1 > m2;
	return d1 > d2;
}

void sapxep(List ds[], int n){
	sort(ds, ds + n, cmp);
}

int main(){
	int n;
	cin >> n;
	List ds[n];
	for (int i=0; i<n; i++){
		nhap(ds[i]);
	}
	sapxep(ds, n);
	cout << ds[0].hoTen << endl << ds[n - 1].hoTen;
	return 0;
}
