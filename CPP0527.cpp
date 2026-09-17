#include <iostream>
#include <algorithm>

using namespace std;

struct Time{
	int gio, phut, giay;
};

void nhap(Time ds[], int n){
	for (int i=0; i<n; i++){
		cin >> ds[i].gio >> ds[i].phut >> ds[i].giay;
	}
}

bool cmp(Time a, Time b){
	if (a.gio != b.gio) return a.gio < b.gio;
	if (a.phut != b.phut) return a.phut < b.phut;
	return a.giay < b.giay;
}

void in(Time ds[], int n){
	sort(ds, ds + n, cmp);
	for (int i=0; i<n; i++){
		cout << ds[i].gio << " " << ds[i].phut << " " << ds[i].giay << endl;
	}
}

int main(){
	int n;
	cin >> n;
	Time ds[n];
	nhap(ds, n);
	in(ds, n);
	return 0;
}
