#include <iostream>
#include <set>
#include <map> 
#define M 100000

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int A[n][n];
		map<int,int> mp;
		int cnt = 0;
		for (int i = 0; i < n; i++){
			set<int> se;
			for (int j = 0; j < n; j++){
				cin >> A[i][j];
				se.insert(A[i][j]);
			}
			for (auto i : se){
				mp[i]++;
			}
		}
		for (auto i : mp){
			if (i.second == n){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
