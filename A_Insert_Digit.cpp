#include "stdc++.h"

using namespace std;

void solve(string s, int n, int d){
    for(int i=0;i<n;++i) {
        if(s[i] - '0' >= d) {
            cout << s[i];
        } else {
            cout << d;
            for(int j = i; j < n; ++j) {
                cout << s[j];
            }
            cout << "\n";
            return;
        }
    }
    cout << d << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        solve(s, n, d);
    }
}