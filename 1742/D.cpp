// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; cin >> n;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) {
//      cin >> v[i];
//    }
//    int mx = -1;
//    for(int i = n - 1; i >= 0; i--) {
//    	for(int j = i; j >= 0; j--) {
//    	  if(__gcd(v[i], v[j]) == 1) {
//    	  	mx = max(mx, i + j + 2);
//    	  }
//    	}
//    }
//    cout << mx << '\n';
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

// // O(n * n);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   vector<int> val(1001, 0);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     val[v[i]] = i + 1;
   }
   int mx = -1;
   for(int i = 0; i < 1001; i++) {
     for(int j = 0; j < 1001; j++) {
       if(__gcd(i, j) == 1 and val[i] >= 1 and val[j] >= 1) {
        //cout << i << " " << j << " " << val[i] << " " << val[j] << endl;
        mx = max(mx, val[i] + val[j]);
       }
     }
   }
   cout << mx << '\n';
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

// O(a[i] * a[i]); (10^3 * 10^3);


