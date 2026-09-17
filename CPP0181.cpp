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

int main(){
	int t;
	cin >> t;
	while (t--){
		long long a, x, y;
		cin >> a >> x >> y;
		int tmp = ucln(x, y);
		for (int i=1; i<=tmp; i++){
			cout << a;
		}
		cout << endl;
	}
	return 0;
}
