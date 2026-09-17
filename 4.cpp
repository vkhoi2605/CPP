#include <iostream>

using namespace std;

int main(){
	int var = 10;
	int *ip;
	
	ip = &var;

	cout << "value of var varlable: " << var << endl;
	
	cout << "Address stored in ip varlable: " << ip << endl;
	
	cout << "value of *ip varlable: " << *ip << endl;
	return 0;
}
