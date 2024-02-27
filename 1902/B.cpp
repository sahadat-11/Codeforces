// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n, p, l, r; cin >> n >> p >> l >> r;
//    int seven = (n + 6) / 7;
//    int ans = max((p - 1) / (2 * r + l) + 1, (p - seven * r - 1) / l + 1);
//    cout << n - ans << "\n";
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
   int days, point, lesson, lab;
   cin >> days >> point >> lesson >> lab;
   int seven = (days + 6) / 7;
   int ans = 0, l = 1, r = days;
   while(l <= r) {
     int mid = l + (r - l) / 2;
     int get = mid * lesson + lab * min(2 * mid, seven);
     if(point <= get) {
      ans = mid;
      r = mid - 1;
     }
     else l = mid + 1;
   }
   cout << days - ans << "\n";
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