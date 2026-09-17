#include <iostream>

using namespace std;

int main(){
	int m, s;
	cin >> m >> s;
	if (s > 9 * m || (s == 0 && m > 1)){
		cout << "-1 -1";
	} else if (s == 0 && m == 1){
		cout << "0 0";
	} else {
		string minVal = "", maxVal = "";
		int s1 = s, s2 = s - 1;
		for (int i=0; i<m; i++){
			if (s1 >= 9){
				s1 -= 9;
				maxVal += (char)(9 + 48);
			} else {
				maxVal += (char)(s1 + 48);
				s1 = 0;
			}
		}
		for (int i=0; i<m; i++){
			if (s2 >= 9){
				s2 -= 9;
				minVal = (char)(9 + 48) + minVal;
			} else {
				minVal = (char)(s2 + 48) + minVal;
				s2 = 0;
			}
		}
		minVal[0] += 1;
		cout << minVal << " " << maxVal;
	}
	return 0;
} 
