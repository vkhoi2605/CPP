#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau){
			this->tu = tu;
			this->mau = mau;
		}
	friend istream& operator >> (istream& cin, PhanSo &ps){
		cin >> ps.tu >> ps.mau;
		return cin;
	}
	friend ostream& operator << (ostream& cout, PhanSo ps){
		cout << ps.tu << "/" << ps.mau;
		return cout;
	}
	friend PhanSo operator + (PhanSo x, PhanSo y){
		PhanSo sum(1, 1);
		sum.tu = x.tu * y.mau + y.tu * x.mau;
		sum.mau = x.mau * y.mau;
		long long gcd = __gcd(sum.tu, sum.mau);
		sum.tu /= gcd;
		sum.mau /= gcd;
		return sum;
	}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
