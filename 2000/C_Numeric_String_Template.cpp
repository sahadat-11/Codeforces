//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int m; cin >> m;
   for(int i = 0; i < m; i++) {
    string s; cin >> s;
    map<char, int> mp;
    int x = s.size();
    for(int j = 0; j < x; j++) {
     if(mp.find(s[j]) == mp.end()) {
       mp[s[j]] = a[j];
     }
    }
    bool flag = true;
    // for(auto [chr, val] : mp) {
    //     cout << chr << " " << val << "\n";
    // }
    if(x != n) flag = false;
    for(int j = 0; j < x; j++) {
        if(mp[s[j]] != a[j]) {
            flag = false; break;
        }
    }
    if(flag) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}