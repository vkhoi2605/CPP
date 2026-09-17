#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	ifstream f;
	f.open("DATA.in");
	
	long long sum = 0;
	while (!f.eof()){
		string s;
		f >> s;
		stringstream ss(s);
		int n;
		while (ss >> n){
			sum += n;
		}
	}
	cout << sum;
	f.close();
	return 0;
}
