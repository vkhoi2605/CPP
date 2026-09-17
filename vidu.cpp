#include <iostream>
#include <set>
#include <vector>
#include <algorithm> // thu vien sd ham sort

using namespace std;

//set thi cac phan tu khong the trung va sx theo thu tu
//con vecto thi co the trung va khong sx theo thu tu

int main(){
	int n;
	cin >> n;
//	set<int> se;
	vector<int> vec;
	for (int i=1; i*i<=n; i++)
		if (n % i == 0)
		{
		//	se.insert(i);
			vec.push_back(i);
			if (i != n/i)
			//	se.insert(n/i);	
				vec.push_back(n/i);		
		}
	sort (vec.begin(), vec.end());
	for (int s: vec)
		cout << s << " ";
	return 0;
}
