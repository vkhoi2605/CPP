#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int num = 0, maxVal = 0;
		for (int i=0; i<=s.length(); i++){
			if ('0' <= s[i] && s[i] <= '9'){
				num = num * 10 + (s[i] - '0');
			} else {
				maxVal = max(maxVal, num);
				num = 0;
			}
		}
		cout << maxVal << endl;
	}
	return 0;
}
