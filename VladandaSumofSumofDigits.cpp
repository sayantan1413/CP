// https://codeforces.com/contest/1926/problem/C
#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

ll arr[200005];

ll sod(ll d) {
	ll sum = 0;
	while(d > 0) {
		sum += d % 10;
		d /= 10;
	}
	return sum;
}

void fillSod() {
	arr[0] = 0;
	for(ll i=1;i<200005;++i) {
		arr[i] = arr[i-1] + sod(i);
	}
}

void solve() {
	fillSod();
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		cout << arr[n] << "\n";
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
