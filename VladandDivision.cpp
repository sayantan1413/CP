// https://codeforces.com/contest/1926/problem/D
#include<iostream>
#include<map>
#define ll long long int
using namespace std;

string numToBit(int x) {
	string bits = "";
	while(x > 0) {
		char bit = '0' + (x % 2);
		bits += bit;
		x /= 2;
	}
	while(bits.size() < 31) bits += "0";
	return bits;
}

void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;++i) {
			cin >> arr[i];
		}
		map<string, int> mp;
		for(int i=0;i<n;++i) {
			string bits = numToBit(arr[i]);
			mp[bits]++;
		}
		int ans = n;
		for(int i=0;i<n;++i) {
			int y = arr[i];
			string bits = numToBit(arr[i]);
			string flipBits = "";
			if(mp[bits] == 0) continue; // corner case
			while(y > 0) {
				char flipBit = '0' + (y % 2);
				if(flipBit == '0') flipBits += "1";
				else flipBits += "0";
				y /= 2;
			}
			while(flipBits.size() < 31) flipBits += "1";
			if(mp[flipBits] > 0) {
				mp[bits]--;
				mp[flipBits]--;
				ans--;
			}
		}
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
