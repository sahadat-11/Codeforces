// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    ll n; cin >> n;
//    ll sum, i;
//    for(i = 1; i < n; i++) {
//    	sum = (i * (i + 1) / 2);
//    	if(sum >= n) break;
//    }
//    sum = ((i - 1) * (i) / 2);
//    cout << n - sum << "\n";
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


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     ll n; cin >> n;
//     for(ll i = 1; i < n; i++) {
//         n -= i;
//     }
//     cout << n << "\n";
//     return 0;
// } 




//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   bool flag = false;
   int sum = 0;
   for(int i = 1; i <= n; i++) {
    sum += v[i];
    if(sum != 0) flag = true;
   } 
   if(flag) {
    cout << "YES\n";
    if(sum != 0) {
      cout << "1\n";
      cout << 1 << " " << n << "\n"; 
    }
    else {
      cout << "2\n";
      int sum1= 0;
      for(int i = 1; i <= n; i++) {
        sum += v[i];
        if(sum != 0) {
            cout << 1 << " " << i << "\n";
            cout << i + 1 << " " << n << "\n";
            return;
        }
      }
    }
   }
   else {
    cout << "NO\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}