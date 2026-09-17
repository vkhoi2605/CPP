#include <iostream>

using namespace std;

int n, a[100], ok;

void ktao(){
	for (int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if (i == 0){
		ok = 0;
	} else {
		int j = n;
		while (a[i] > a[j]) j--;
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		int l = i + 1, r = n;
		while (l <= r){
			int tmp = a[l];
			a[l] = a[r];
			a[r] = tmp;
			l++; r--;
		}
	}
}

int main(){
	cin >> n;
	ok = 1;
	ktao();
	while (ok){
		for (int i = 1; i <= n; i++){
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
	return 0;
}
