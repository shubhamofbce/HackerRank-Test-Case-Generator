#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, x, res,c=1000000000;
		cout << n;
		x = (n*(n+1))/2;
		res = (x*x)%c;
		cout << res << endl;
	}
	return 0;
}
