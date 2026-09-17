#include <iostream>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	map<string, int> mp;
	while (n--){
		string s;
		getline(cin, s);
		mp[s]++;
	}
	int cnt = 0;
	for (auto i: mp){
		if (i.second >= 1){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
