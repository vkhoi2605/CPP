#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct MatHang{
	int stt;
	string tenHang, nhomHang;
	float giamua, giaban;
};

void nhap(MatHang ds[], int N){
	for (int i=0; i<N; i++){
		ds[i].stt = i + 1;
		cin.ignore();
		getline(cin, ds[i].tenHang);
		getline(cin, ds[i].nhomHang);
		cin >> ds[i].giamua >> ds[i].giaban;
	}
}

bool cmp(MatHang &x, MatHang &y){
	return x.giaban - x.giamua > y.giaban - y.giamua;
}

void in(MatHang ds[], int N){
	sort(ds, ds + N, cmp);
	for (int i=0; i<N; i++){
		cout << ds[i].stt << " " << ds[i].tenHang << " " << ds[i].nhomHang << " ";
		float res = ds[i].giaban - ds[i].giamua;
		cout << fixed << setprecision(2) << res << endl;
	}
}

int main(){
	int N;
	cin >> N;
	struct MatHang ds[N];
	nhap(ds, N);
	in(ds, N);
	return 0;	
}
