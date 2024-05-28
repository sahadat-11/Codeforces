// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; cin >> n;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) {
//      cin >> v[i];
//    }
//    int cnt = 0;
//    for(int i = 1; i < n; i++) {
//    	while(v[i] < v[i - 1]) {
//    	  v[i] *= 2; cnt++;
//    	}
//    }
//    cout << cnt << "\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

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
   int cnt = 0, ans = 0;
   for(int i = 1; i < n; i++) {
     int op = ceil(log2(1.0 * v[i - 1] / v[i]));
     cnt = max(cnt + op, 0ll);
     ans += cnt;
     //cout << op << " " << cnt << " " << ans << '\n';
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