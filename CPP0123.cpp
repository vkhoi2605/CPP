#include <iostream>
#include <vector>

using namespace std;

//bool checkNT(int n){
//	C1
//	for (int i=2; i*i<=n; i++)
//		if (n % i == 0)
//			return false;
//	return n > 1;
//}

// C2
void sangNT(int n){
	vector<bool> isPrime(n+1, true);
	isPrime[0] = isPrime[1] = false;
	for (int i=2; i*i<=n; i++)
		if (isPrime[i])
			for (int j=i*i; j<=n; j+=i)
				isPrime[j] = false;
}

int main(){
	int n;
	cin >> n;
	sangNT(n);
//	if (checkNT(n))
//		cout << "YES";
//	else
//		cout << "NO";
	if (isPrime[n])
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
