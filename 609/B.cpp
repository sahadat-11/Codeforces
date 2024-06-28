//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   ll ans = 0;
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     ans += (i - mp[a[i]]);
     mp[a[i]]++;
     //cout << ans << "\n";
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     mp[a[i]]++;
   }
   int ans = 0;
   for(auto [val, fre] : mp) {
    ans += (fre * (n - fre));
   }
   cout << ans / 2 << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/6Ff2nLqxhwtU