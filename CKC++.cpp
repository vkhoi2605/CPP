#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

class SoPhuc{
	private:
		int thuc, ao;
	public:
		SoPhuc(int thuc, int ao){
			this->thuc = thuc;
			this->ao = ao;
		}
	friend istream& operator >> (istream& cin, SoPhuc &a){
		cin >> a.thuc >> a.ao;
		return cin;
	}
	friend ostream& operator << (ostream& cout, SoPhuc a){
		cout << a.thuc << " + " << a.ao << "i" << endl;
		return cout;
	}
	friend SoPhuc operator + (SoPhuc a, SoPhuc b){
		SoPhuc c(1, 1);
		c.thuc = a.thuc + b.thuc;
		c.ao = a.ao + b.ao;
		return c;
	}
};

int main(){
	SoPhuc p(3, 2), q(4, 5);
	cin >> p >> q;
	cout << p + q;
}
