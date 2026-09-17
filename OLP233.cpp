#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n];
	for (int i=0; i<n; i++){
		cin >> A[i];
	}
	long long sum = 0;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			sum += abs(A[i] - A[j]);
		}
	}
	cout << sum;
	return 0;
}
