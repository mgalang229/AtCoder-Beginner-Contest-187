#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n;
vector<ar<double, 2>> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	v=vector<ar<double, 2>>(n);
	for(int i=0; i<n; ++i)
		cin >> v[i][0] >> v[i][1];
	int cnt=0;
	//check if the slope of two points is between -1 and 1 inclusive
	for(int i=0; i<n; ++i)
		for(int j=i+1; j<n; ++j)
			if(v[j][0]-v[i][0]!=0) {
				double sl=(v[j][1]-v[i][1])/(v[j][0]-v[i][0]);
				if(sl>=-1&&sl<=1)
					cnt++;
			}
	cout << cnt << "\n";
}
