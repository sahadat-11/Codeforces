//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    for(int bit = 0; bit < 32; bit++) {
      if(mp.find((1ll << bit) - a[i]) != mp.end()) {
        ans += (mp[(1ll << bit) - a[i]]);
      }
    }
    mp[a[i]]++;
  }
//   for(auto [u, cnt] : mp) {
//     cout << u << " " << cnt << "\n";
//   }
  cout << ans << "\n";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll cnt = 0;
   map<int, int > mp;
   for(int i = 0; i < n; i++) {
   	 for(int bit = 0; bit < 31; bit++) {
   	 	int x = (1 << bit);
   	 	int required = x - v[i];
   	 	cnt += mp[required];
   	 }
   	 mp[v[i]]++;
   }
   cout << cnt << "\n";
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
// (n * 31 * log(n))