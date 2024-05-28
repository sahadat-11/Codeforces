// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t; cin >> t;
//   while(t--) {
//   	int n; cin >> n; int a[n];
//     vector<int> v;
//     for(int i = 0; i < n; i++) cin >> a[i];
//     v.push_back(a[0]);
//     for(int i = 1; i < n; i++) {
//       if(a[i - 1] <= a[i]) {
//         v.push_back(a[i]);
//       }
//       else {
//         v.push_back(a[i]);
//         v.push_back(a[i]);
//       }
//     }
//     cout << v.size() << "\n";
//     for(auto u : v) cout << u << " ";
//     cout << "\n";
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
   for(int i = 0; i < n; i++) cin >> v[i];
   vector<int> ans;
   ans.push_back(v[0]);
   for(int i = 1; i < n; i++) {
    if(v[i] >= v[i - 1]) ans.push_back(v[i]);
    else {
      ans.push_back(v[i]); 
      ans.push_back(v[i]);
    }
   }
   cout << (int)ans.size() << "\n";
   for(auto u: ans) cout << u << " "; cout << "\n";
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