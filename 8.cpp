//Xay dung chuong trinh theo pp POP
#include<iostream>
#include <math.h> 

using namespace std;

bool checkNChuSo(int k, int n){
//	int dem = 0;
//	while (k != 0){
//		k /= 10;
//		dem++;
//	}
//	return dem == n;
	string sk = to_string(k);
	return sk.length() == n;
}

bool checkNT(int k){
	for (int i=2; i<=sqrt(k); i++){
		if (k % i == 0){
			return false;
		}
	}
	return k > 1;
}

bool checkSumNT(int k){
	int sum = 0;
	while (k != 0){
		sum = sum + k % 10;
		k /= 10;
	}
	return checkNT(sum);
}

bool checkEachNT(int k){
	while (k != 0){
		if (!checkNT(k % 10)){
			return false;
		}
		k /= 10;
	}
	return true;
}
 
int main(){
	//1.Input
	int k, n;
	cin >> k >> n;
	//2.Process
	bool exist = false;
	if(checkNChuSo(k, n) && checkNT(k) && checkSumNT(k) && checkEachNT(k)){
		exist = true;
	}
	//3.Output
	if(exist){
		cout << "Dap ung";
	} else {
		cout << "Ko dap ung";
	}
	return 0;
}
