#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <set>
#include <climits> 

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int cnt = 0, maxArr = INT_MIN, minArr = INT_MAX;
		int A[n];
		set<int> se;
		for (int i=0; i<n; i++){
			cin >> A[i];
			se.insert(A[i]);
			maxArr = max(maxArr, A[i]);
			minArr = min(minArr, A[i]);
		}
		for (int i=minArr; i<=maxArr; i++){
			if (se.find(i) == se.end()){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
