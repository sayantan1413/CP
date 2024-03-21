// https://codeforces.com/problemset/problem/1901/A
// TLE Q 800 - 2
#include<iostream>
#include<map>
#define ll long long int
using namespace std;


void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int ans = 0;
		int start = 0;
		int input;
		for(int i=0;i<n;++i) {
			cin >> input;
			ans = max(ans, input - start);
			start = input;
		}
		ans = max(ans, 2 * (x - start));
		cout << ans << "\n";
	}
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		solve();
		return 0;
}
