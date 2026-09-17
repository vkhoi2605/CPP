#include <iostream>

using namespace std;

struct PhanSo{
	long long a, b;
};

void nhap(PhanSo &x){
	cin >> x.a >> x.b;
}

void in(PhanSo res){
	cout << res.a << "/" << res.b;
}

long long ucln(long long a, long long b){
	while (b != 0){
		long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

PhanSo tong(PhanSo &x, PhanSo &y){
	PhanSo t;
	t.a = x.a*y.b + y.a*x.b;
	t.b = x.b*y.b;
	long long uc = ucln(t.a, t.b);
	t.a /= uc;
	t.b /= uc;
	return t;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
} 
