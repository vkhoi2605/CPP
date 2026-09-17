#include <iostream>
#include <math.h>

using namespace std;

void PhanTichNT(int n){
	for (int i=2; i<=sqrt(n); i++){
		while (n % i == 0){
			n /= i;
			cout << i << " ";
		}
	}
	if (n > 1){
		cout << n << endl;
	}
}

bool checkNT(int n){
	for (int i=2; i<=sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return n > 1;
}

int tongCS(int n){
	int sum = 0;
	while (n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int luythua(int a, int b){
	int tich = 1;
	for (int i=1; i<=b; i++){
		tich *= a;
	}
	return tich;
}

void LietKeNT(int n, int s){
	for (int i=luythua(10,n-1); i<=luythua(10,n)-1; i++){
		if (checkNT(i) && tongCS(i) == s){
			cout << i << " ";
		}
	}
}

int main(){
	//1.Input
	int n;
	cin >> n;
	int choice;
	cin >> choice;
	
	//2.Process
	if(choice == 1){
		PhanTichNT(n);
	} else{
		int s;
		cin >> s;
		LietKeNT(n, s);
	}
	
	//3.Output
	
	return 0;
}
