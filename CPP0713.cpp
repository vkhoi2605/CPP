#include <iostream>

using namespace std;

void ktao(int n, int A[]){
	for (int i = 1; i <= n; i++){
		A[i] = i;
	}
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sinh(int n, int A[], bool &check){
	int i = n - 1;
	while (i >= 1 && A[i] > A[i + 1]){
		i--;
	}
	if (i == 0){
		check = false;
	} else {
		int j = n;
		while (A[i] > A[j]) j--;
		swap(&A[i], &A[j]);
		int l = i + 1, r = n;
		while (l < r){
			swap(&A[l], &A[r]);
			l++; r--;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n+1];
		ktao(n, A);
		bool check = true;
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
