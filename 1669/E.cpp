// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; cin >> n; string s[n];
//    for(int i = 0; i < n; i++) {
//     cin >> s[i]; 
//    }
//    int cnt = 0;
//    for(int i = 0; i < n; i++) {
//     for(int j = i + 1; j < n; j++) {
//       string x = s[i], y = s[j];
//       if((x[0] == y[0] and x[1] != y[1]) or (x[0] != y[0] and x[1] == y[1])) {
//       	cnt++;
//       }
//     } 
//    }
//    cout << cnt << "\n";
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
// // O(N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n; string s[n];
   for(int i = 0; i < n; i++) {
    cin >> s[i]; 
   }
   int cnt = 0;
   map<char, int> mp1, mp2;
   map<string, int> mp3;
   for(int i = 0; i < n; i++) {
     string x = s[i];
     cnt += mp1[x[0]] + mp2[x[1]] - 2 * mp3[x];
     mp1[x[0]]++; mp2[x[1]]++; mp3[x]++;
   }
   cout << cnt << "\n";
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
// O(N * N)