#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau){
			this->tu = tu;
			this->mau = mau;
		}
		void rutgon(){
			long long gcd = __gcd(tu, mau);
			tu /= gcd;
			mau /= gcd;
		}
	friend istream& operator >> (istream& cin, PhanSo &ps){
		cin >> ps.tu >> ps.mau;
		return cin;
	}
	friend ostream& operator << (ostream& cout, PhanSo &ps){
		cout << ps.tu << "/" << ps.mau;
		return cout;
	}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
