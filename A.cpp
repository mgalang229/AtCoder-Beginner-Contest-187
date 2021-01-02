#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int s(int n) {
	int sum=0;
	while(n!=0) {
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b;
	cin >> a >> b;
  	//find the sum of the digits and print the larger sum
	cout << max(s(a), s(b)) << "\n";
}
