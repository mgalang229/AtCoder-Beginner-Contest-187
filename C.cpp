#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	string s[n];
	set<string> ss;
	//create a set to store distinct strings
	for(int i=0; i<n; ++i) {
		cin >> s[i];
		ss.insert(s[i]);
	}
	//check if the "!" + the current string is already in the set
	for(int i=0; i<n; ++i)
		if(ss.count("!"+s[i])) {
			cout << s[i] << "\n";
			return 0;
		}
	cout << "satisfiable" << "\n";
}
