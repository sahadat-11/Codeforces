// //https://codeforces.com/gym/104246
// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve() {
//   ll n; cin >> n;
//   int i = 1;
//   while(n % i == 0) i++;
//   cout << i - 1 << "\n";
// }
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int t; cin >> t;
//    while(t--) {
//       solve();
//    }
//    return 0;
// }


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  int n; cin >> n;
  for(int i = 1; ; i++) {
    if(n % i != 0) {
      cout << i - 1 << "\n";
      return;
    }
  } 
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