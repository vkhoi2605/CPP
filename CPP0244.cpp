#include <iostream>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n];
	map<int, int> mp;
	for (int i=0; i<n; i++){
		cin >> A[i];
		mp[A[i]]++;
	}
	for (auto i: mp){
		if (i.second >= 1)
			cout << i.first << " ";
	}
	return 0;
}
