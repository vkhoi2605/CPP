#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll minSum(string x1, string x2){
	ll ans = 0;
	for (int i = 0; i < x1.length(); i++){
		if (x1[i] == '6'){
			x1[i] = '5';
		}
	}
	ans += stoll(x1);
	for (int i = 0; i < x2.length(); i++){
		if (x2[i] == '6'){
			x2[i] = '5';
		}
	}
	ans += stoll(x2);
	return ans;
}

ll maxSum(string x1, string x2){
	ll ans = 0;
	for (int i = 0; i < x1.length(); i++){
		if (x1[i] == '5'){
			x1[i] = '6';
		}
	}
	ans += stoll(x1);
	for (int i = 0; i < x2.length(); i++){
		if (x2[i] == '5'){
			x2[i] = '6';
		}
	}
	ans += stoll(x2);
	return ans;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string x1, x2;
		cin >> x1 >> x2;
		ll minVal = 0, maxVal = 0;
		minVal = minSum(x1, x2);
		maxVal = maxSum(x1, x2);
		cout << minVal << " " << maxVal << endl;
	}
	return 0;
}
