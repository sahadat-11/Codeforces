// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7, mod = 1e9 + 7;
// #define int long long
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int n; cin >> n;
//   vector<int> a(n + 1);
//   for(int i = 1; i <= n; i++) {
//     cin >> a[i];
//   }
//   int cnt = 0;
//   vector<bool> used(n + 1, false);
//   for(int i = 1; i <= n; i++) {
//     for(int j = 1; j < i; j++) {
//       if(j >= (i - a[i]) and !used[j]) {
//         cnt++; used[j] = true;
//       } 
//     }
//   }
//   cout << n - cnt << "\n";
//   return 0;
// }

// // O(N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int alive = 1;
  int dif = n - a[n];
  for(int i = n - 1; i >= 1; i--) {
    if(dif > i) alive++;
    int cur_dif = i - a[i];
    dif = min(dif, cur_dif);
  }
  cout << alive << "\n";
  return 0;
}