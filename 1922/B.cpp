// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    int n; cin >> n;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) cin >> v[i];
//    sort(v.begin(), v.end());
//    map<int,int> mp;
//    for(int i = 0; i < n; i++) {
//      mp[v[i]]++;
//    }
//    ll ans = 0;
//    for(auto [val, fre] : mp) {
//      int idx = lower_bound(v.begin(), v.end(), val) - v.begin();
//      ans += (1ll * fre * (fre - 1) * (fre - 2) / 6); // CNTc3
//      ans += (1ll * (1ll * fre * (fre - 1) / 2)) * idx; // CNTc2 + lower value
//    }
//    cout << ans << "\n";
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

// // https://prnt.sc/XRJcoF_tUpta


#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    long long ans = 0;
    vector<int> cnt(n + 1, 0);
    for (int i = n; i >= 1; i--) {
      ans += 1LL * (i - 1) * cnt[a[i]];
      cnt[a[i]]++;
      cout << ans << "\n";
    }
    cout << ans << '\n';
  }
  return 0;
}