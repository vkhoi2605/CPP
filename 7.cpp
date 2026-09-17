#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
//	int A[n] : khai bao mang tinh
	int *ptr = new int[n]; // khai bao mang dong va duoc tro toi boi con tro
	for (int i=0; i<n; i++){
		cin >> ptr[i];
	}
	for (int i=0; i<n; i++){
		cout << ptr[i] << " ";
	}
	cout << endl;
	delete []ptr; // giai phong con vung nho cua con tro
	for (int i=0; i<n; i++){
		cout << ptr[i] << " ";
	}
	return 0;
}
