// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t; cin >> t;
//   while(t--) {
//     int n; cin >> n;
//     string s; cin >> s;
//     int mx = 1, cnt = 1;
//     for(int i = 0; i < n - 1; i++) {
//       if(s[i] == s[i + 1]) {
//         cnt++;
//         mx = max(mx, cnt);
//       }
//       else cnt = 1;
//     }
//     cout << mx + 1 << endl;
//   }
//   return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  int n; string s; cin >> n >> s;
  int cnt = 1;
  int mx = 1;
  for(int i = 1; i < n; i++) {
    if(s[i] == s[i - 1]) {
      cnt++;
      mx = max(mx, cnt);
    }
    else {
      cnt = 1;
    }
  }
  cout << mx + 1 << "\n";
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