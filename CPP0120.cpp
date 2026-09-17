#include <iostream>

using namespace std;

int ucln(int a, int b){
	while (b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int bcnn(int a, int b){
	return a * b / ucln(a, b);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int bc = bcnn(a, b);
		int result = n / a + n / b - (m - 1) / a - (m - 1) / b - n / bc + (m - 1) / bc;
		cout <<	result << endl;
	}
	return 0;
}
