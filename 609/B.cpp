//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll ans = 0;
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     ans += (i - mp[v[i]]);
     mp[v[i]]++;
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
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> mp;
   for(int i = 0; i < n; i++) mp[v[i]]++;
   int ans = 0;
   for(int i = 0; i < n; i++) {
    ans += (n - mp[v[i]]);
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