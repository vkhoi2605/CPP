#include <iostream>

using namespace std;
const int MAX = 3;

int main(){
	int var[MAX] = {10, 100, 200};
	int *ptr;
	
	ptr = var; // <=> ptr = &var[0];
	
	for (int i=0; i<MAX; i++){
		cout << "Address of var[" << i << "] : " << ptr << endl;
		cout << "Value of var[" << i << "] : " << *ptr << endl;
		ptr++;
		cout << endl;
	}
	return 0;
}
