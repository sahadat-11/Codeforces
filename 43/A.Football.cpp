//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<string, int> mp;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        mp[s]++;
    }
    int mxc = 0; string mxs;
    for(auto u : mp) {
        if(u.second > mxc) {
            mxc = u.second;
            mxs = u.first;
        }
    }
    cout << mxs << "\n";
	return 0;
} 