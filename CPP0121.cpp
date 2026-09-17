#include <iostream>
#define ull unsigned long long

using namespace std;

int ucln(int a, int b){
	while (b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

ull bcnn(int a, int b){

	return (ull)a * b / ucln(a, b);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int a, b;
		cin >> a >> b;
		if (a < b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		cout << bcnn(a, b) << " " << ucln(a, b) << endl;
	}
	return 0;
}
