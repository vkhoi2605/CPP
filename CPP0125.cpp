#include <iostream>

using namespace std;

bool checkNT(int n){
	for (int i=2; i*i<=n; i++){
		if (n % i == 0)
			return false;
	}
	return n > 1;
}

int main(){
	int a, b;
	cin >> a >> b;
	if (a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i=a; i<=b; i++){
		if (checkNT(i))
			cout << i << " ";
	}
	return 0;
}
