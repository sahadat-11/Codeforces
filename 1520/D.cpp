//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   map<int, int> mp;
   int cnt = 0;
   for(int i = 0; i < n; i++) {
     cnt += mp[(a[i] - (i - 1))]; // for 0 indexing
     mp[a[i] - (i - 1)]++;
   }
   cout << cnt << "\n"; 
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    map<int, int > mp;
    for(int i = 0; i < n; i++) {
      mp[a[i] - i - 1]++; // for 0 indexing
      //(aj - ai == j - i) // (aj - j) = (ai - i); 
    }
    // for(auto u : mp) {
      // cout << u.first << " " << u.second << "\n";
    // }
    ll ans = 0;
    for(auto u : mp) {
      ans += (1ll* (u.second) * (u.second - 1) / 2);
    }
    cout << ans << "\n";
  }
  return 0;
}

