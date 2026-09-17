#include <iostream>
#include <string>
#include <math.h>
#define ll long long

using namespace std;

struct PhanSo{
	ll tu, mau;
};

ll ucln(ll x, ll y){
	while (y != 0){
		ll r = x % y;
		x = y;
		y = r;
	}
	return x;
}

void process(PhanSo A, PhanSo B){
	PhanSo C;
	C.tu = pow(A.tu * B.mau + B.tu * A.mau, 2);
	C.mau = pow(A.mau * B.mau, 2);
	ll ucln1 = ucln(C.tu, C.mau);
	C.tu /= ucln1;
	C.mau /= ucln1;
	cout << C.tu << "/" << C.mau << " ";
	PhanSo D;
	D.tu = A.tu * B.tu * C.tu;
	D.mau = A.mau * B.mau * C.mau;
	ll ucln2 = ucln(D.tu, D.mau);
	D.tu /= ucln2;
	D.mau /= ucln2;
	cout << D.tu << "/" << D.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
} 
