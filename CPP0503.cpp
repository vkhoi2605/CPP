#include <iostream>

using namespace std;

struct PhanSo{
	long long ts, ms;
};

void nhap(PhanSo &p){
	cin >> p.ts >> p.ms;
}

void rutgon(PhanSo &p){
	long long a = p.ts;
	long long b = p.ms;
	while (b != 0){
		long long r = a % b;
		a = b;
		b = r;
	}
	p.ts /= a;
	p.ms /= a;
}

void in(PhanSo &p){
	cout << p.ts << "/" << p.ms;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
