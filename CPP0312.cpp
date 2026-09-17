#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int K;
		cin >> K;
		int C[256] = {0};
		for (int i=0; i<s.length(); i++){
			C[s[i]]++;
		}
		int cnt = 0;
		for (int i=0; i<=255; i++)
			if (C[i] >= 1){
				cnt++;
			}
		if (K >= 26 - cnt){
			cout << 1;
		} else {
			cout << 0;
		}
		cout << endl;
	}
	return 0;
}
