#include <iostream>

using namespace std;

void ktao(int k, int A[]){
	for (int i = 1; i <= k; i++){
		A[i] = i;
	}
}

void sinh(int n, int k, int A[], bool &check){
	int i = k;
	while (i >= 1 && A[i] == n - k + i){
		i--;
	}
	if (i == 0){
		check = false;
	} else {
		A[i]++;
		for (int j = i + 1; j <= k; j++){
			A[j] = A[j - 1] + 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int A[n+1];
		ktao(k, A);
		bool check = true;
		while (check){
			for (int i = 1; i <= k; i++){
				cout << A[i];
			}
			cout << " ";
			sinh(n, k, A, check);
		}
		cout << endl;
	}
	return 0;
}
