#include <iostream> 

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, X;
		cin >> n >> X;
		int cnt = 0;
		for (int i=0; i<n; i++){
			int tmp;
			cin >> tmp;
			if (tmp == X){
				cnt++;
			}
		}
		if (cnt > 0){
			cout << cnt;
		} else {
			cout << "-1";
		}
		cout << endl;
	}
	return 0;
}
