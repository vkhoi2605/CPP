#include <iostream>

using namespace std;

void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}

int main(){
	int x = 3, y = 6;
	cout << "Before: " << x << " " << y << endl;
	swap(x, y);
	cout << "After: " << x << " " << y;
	return 0;
} 
