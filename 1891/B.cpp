// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n, q; cin >> n >> q;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) {
//      cin >> v[i];
//    }
//    while(q--) {
//    	int x; cin >> x;
//    	int y = (1 << x);
//    	int z = (1 << (x - 1));
//     for(int i = 0; i < n; i++) {
//      if(v[i] % y == 0) v[i] += z; 
//     }
//    }
//    for(int i = 0; i < n; i++) {
//      cout << v[i] << " "; 
//    }
//    cout << "\n";
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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, q; cin >> n >> q;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   vector<int> vv(32, 0), ans;
   for(int i = 0; i < q; i++) {
     int x; cin >> x;
     vv[x]++;
     if(vv[x] == 1) ans.push_back(x);
   }
   for(int i = 0; i < (int)ans.size(); i++) {
     for(int j = 0; j < n; j++) {
     	int y = (1 << ans[i]);
   	    int z = (1 << (ans[i] - 1));
     	if(v[j] % y == 0) v[j] += z;
     }
   }
   for(int i = 0; i < n; i++) {
    cout << v[i] << " "; 
   }
   cout << "\n";
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