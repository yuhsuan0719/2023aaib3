#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	int now;
	while( cin >> now ){
		if(now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for(int i=0; i<a.size(); i++){
		if(a[i]==now) ans++;
	}
	cout << ans <<"\n";
}