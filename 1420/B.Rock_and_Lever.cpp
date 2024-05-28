//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int ans = 0;
   for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if((v[i] & v[j]) >= (v[i] ^ v[j])) {
        ans++;
      }
    }
   }
   cout << ans << "\n";
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
//O(N * N)



//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
      int x = 31 - __builtin_clz(a[i]); // 0 indexing
      //int x = 32 - __builtin_clz(a[i]); // 1 indexing
      //cout << x << endl;
      ans += mp[x]++; 
    }
    cout << ans << "\n";
  }
  return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    vector<int> v(32);
    for(int i = 0; i < n; i++) {
      int x = 31 - __builtin_clz(a[i]); // 0 indexing
      //int x = 32 - __builtin_clz(a[i]); // 1 indexing
      //cout << x << endl;
      v[x]++;
    }
    for(int i = 0; i < 32; i++) {
      ans += (1ll * v[i] * (v[i] - 1)) / 2;
    }
    cout << ans << "\n";
  }
  return 0;
}

// https://prnt.sc/NbQGSkqXo8sv
