#include <iostream>

using namespace std;

struct Employee{
	string name;
	int age;
	string role;
	float salary;
};

int main(){
	Employee emp1; //<=>int x;
	emp1.name = "Nguyen Van A";
	emp1.age = 20;
	emp1.role = "Nhan Vien";
	emp1.salary = 5000;
	cout << emp1.name << " " << emp1.age << " " << emp1.role << " " << emp1.salary;
	return 0;
}
