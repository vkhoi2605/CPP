#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct ThiSinh{
	string hoTen;
	string ngaySinh;
	float mon1, mon2, mon3;
};

void nhap(ThiSinh &TS){
	getline(cin, TS.hoTen);
	getline(cin, TS.ngaySinh);
	cin >> TS.mon1 >> TS.mon2 >> TS.mon3;
}

void in(ThiSinh &TS){
	cout << TS.hoTen << " " << TS.ngaySinh << " ";
	float total = TS.mon1 + TS.mon2 + TS.mon3;
	cout << fixed << setprecision(1) << total;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
