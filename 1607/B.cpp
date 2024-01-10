// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int mod = 1e9;
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
// 	int t; cin >> t;
//   while(t--) {
//     ll x, n; cin >> x >> n;
//     for(ll i = 1; i <= n; i++) {
//       if(x % 2) x += i;
//       else x -= i;
//     }
//     cout << x << "\n";
//   }
//   return 0;
// }
// // O(n)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    ll x, n; cin >> x >> n;
    ll even = n / 2;
    ll odd = (n + 1) / 2;
    ll even_sum = even * (even + 1);
    ll odd_sum = odd * odd;
    cout << even_sum << " " << odd_sum << endl;
    if(x % 2) {
       x -= even_sum;
       x += odd_sum;
    }
    else {
      x -= odd_sum;
      x += even_sum;
    }
    cout << x << "\n";
  }
  return 0;
}
// O(n)