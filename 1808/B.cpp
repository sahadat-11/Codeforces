// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n, m; cin >> n >> m;
//    int v[n][m];
//    for(int i = 0; i < n; i++) {
//     for(int j = 0; j < m; j++) cin >> v[i][j]; 
//    }
//    int ans = 0;
//    for(int i = 0; i < n; i++) {
//    	for(int j = i + 1; j < n; j++) {
//    	  for(int k = 0; k < m; k++) {
//    	  	ans += abs(v[i][k] - v[j][k]);
//    	  }
//    	}
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

// // O(n * n * n)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   int v[m][n];
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) cin >> v[j][i]; 
   }
   int ans = 0;
   for(int i = 0; i < m; i++) {
   	sort(v[i], v[i] + n);
   	for(int j = 0; j < n; j++) {
   	  ans += (v[i][j] * (1 + 2 * j - n));
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