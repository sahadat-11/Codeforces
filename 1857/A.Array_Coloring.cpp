// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t; cin >> t;
//   while(t--) {
//     int n; cin >> n; int a[n];
//     int odd = 0;
//     for(int i = 0; i < n; i++) {
//       cin >> a[i];
//       if(a[i] % 2) odd++;
//     }
//     if(odd % 2) cout << "NO\n";
//     else cout << "YES\n";
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
   int odd = 0, even = 0;
   for(int i = 0; i < n; i++) {
    if(v[i] % 2) odd++; 
   }
   if(odd % 2) cout << "NO\n";
   else cout << "YES\n";
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