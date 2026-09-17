#include <iostream>
#include <fstream>
#define M 1000

using namespace std;

int main(){
	ifstream f;
	f.open("DATA.in");
	int n, m;
	f >> n >> m;
	int A[n], B[m];
	int C1[M + 2] = {0}, C2[M + 2] = {0};
	for (int i = 0; i < n; i++){
		f >> A[i];
		C1[A[i]]++;
	}
	for (int i = 0; i < m; i++){
		f >> B[i];
		C2[B[i]]++;
	}
	for (int i = 1; i <= M; i++){
		if (C1[i] >= 1 && C2[i] >= 1){
			cout << i << " ";
		}
	}
	return 0;
}
