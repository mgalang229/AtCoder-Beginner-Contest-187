#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	pair<ll, ll> p[n];
	vector<ll> v(n);
	ll a=0;
	for(int i=0; i<n; ++i) {
		cin >> p[i].first >> p[i].second;
		//find the total voters of aoki
		a+=p[i].first;
		//calculate the total numbers of that would add up to takahashi
		//and will subtract from the total number of voters from aoki
		v.push_back(2*p[i].first+p[i].second);
	}
	//sort in decreasing order
	sort(v.begin(), v.end(), greater<ll>());
	int id=0;
	//find out how many voters should be subtracted from aoki
	while(a>=0)
		a-=v[id++];
	cout << id << "\n";
}
