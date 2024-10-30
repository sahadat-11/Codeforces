// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7, mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n, x; cin >> n >> x;
//    int ans = 0;
//    for(int a = 1; a <= n; a++) {
//     for(int b = 1; b <= n; b++) {
//         for(int c = 1; c <= n; c++) {
//             if(b * c > n) break;
//             if(a*b + b*c + c*a <= n and a + b + c <= x) {
//               ans++;
//             }
//         }
//         if(a * b > n) break;
//     }
//    }
//    cout << ans << "\n";
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

// // O(N * N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   int ans = 0;
   for(int a = 1; a < n; a++) {
    for(int b = 1; a * b < n; b++) {
        ans += max(0ll, min(x - a - b, (n - a * b) / (a + b)));
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

// O(N * sqrt(N))