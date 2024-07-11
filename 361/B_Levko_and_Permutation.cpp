// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7, mod = 1e9 + 7;
// #define int long long
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int n, k; cin >> n >> k;
//   int cnt = 0;
//   for(int i = 1; i <= n; i++) {
//     if(__gcd(i, i) > 1) cnt++;
//   }
//   if(cnt >= k) {
//     for(int i = 1; i <= n; i++) {
//       cout << i << " ";
//     }
//     cout << "\n";
//   }
//   else {
//     cout << "-1\n";
//   }
//   return 0;
// }

// // atleast K goods element


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  if(n == k) cout << "-1\n";
  else {
    cout << n - k << " ";
    for(int i = 1; i <= n - k - 1; i++) {
      cout << i << " ";
    }
    for(int i = n - k + 1; i <= n; i++) {
        cout << i << " ";
    }
  }
  return 0;
}