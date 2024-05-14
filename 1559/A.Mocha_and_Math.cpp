// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t; cin >> t;
//   while(t--) {
//     int n; cin >> n; int a[n];
//     for(int i = 0; i < n; i++) cin >> a[i];
//     int x = a[0];
//     for(int i = 1; i < n; i++) {
//       x &= a[i];
//     }
//     cout << x << endl;
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
   int AND = v[0];
   for(int i = 1; i < n; i++) {
    AND = (AND & v[i]);
    // cout << AND << " ";
   }
   cout << AND << "\n";
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