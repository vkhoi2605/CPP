#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n][3];
	int dem = 0;
	for (int i=0; i<n; i++){
		int cnt = 0;
		for (int j=0; j<3; j++){
			cin >> A[i][j];
			if (A[i][j] == 1)
				cnt++;
		}
		if (cnt >= 2)
			dem++;
	}
	cout << dem;
	return 0;
}
