// TLE-Eliminator Q 800-1
// https://codeforces.com/problemset/problem/1903/A
#include<iostream>
#include<algorithm>
using namespace std;

void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0;i<n;++i) {
			cin >> a[i];
		}
		if(k == 1 && !is_sorted(a, a+n)) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
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
