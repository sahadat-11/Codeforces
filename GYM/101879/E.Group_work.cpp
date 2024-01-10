// // //In The Name of ALLAH
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // const int N = 35, mod = 1e9 + 7;
// // ll fact[N];
// // void solve() {
// //   fact[0] = 1;
// //   for(int i = 1; i < N; i++) {
// //   	fact[i] = (fact[i - 1] * 1ll * i);
// //   }
// //   int n; cin >> n;
// //   ll x = fact[n];
// //   ll ans = 0;
// //   for(int i = 2; i <= n; i++) {
// //     ll y = fact[i];
// //     ll z = fact[n - i];
// //     ans += (x / (y * z));
// //   }
// //   cout << ans << "\n";
// // }
// // int main() {
// //   ios_base::sync_with_stdio(0);
// //   cin.tie(0);
// //   int t = 1; 
// //   //cin >> t;
// //   while(t--) {
// //     solve();
// //   }
// //   return 0;
// // }
// // // O(n) but get w/A;


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// ll binexp(ll a, ll b) {
// 	ll ans = 1;
// 	while(b) {
// 		if(b & 1) { // if b in odd
// 			ans = (ans * 1ll * a); // type cast for integer overflow
// 		}
// 		a = (a * 1ll * a) % mod;
// 		b >>= 1; // if b in odd(if 0th bit is set)
// 	}
// 	return ans;
// }
// void solve() {
//    int n; cin >> n;
//    ll ans = binexp(2, n);
//    ans -= (1 + n);
//    cout << ans << "\n";
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   cout << (1 << n) - 1 - n;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/DuIztebslwfQ