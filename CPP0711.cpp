#include <iostream>

using namespace std;

void ktao(int n, int A[]){
	for (int i = 1; i <= n; i++){
		A[i] = 0;
	}
}

void sinh(int n, int A[], bool &check){
	int i = n;
	while (i >= 1 && A[i] == 1){
		A[i] = 0;
		i--;
	}
	if (i == 0){
		check = false;
	} else {
		A[i] = 1;
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n+1];
		bool check = true;
		ktao(n, A);
		while (check){
			for (int i = 1; i <= n; i++){
				cout << A[i];
			} 
			cout << " ";
			sinh(n, A, check);
		}
		cout << endl;
	}
	return 0;
}
