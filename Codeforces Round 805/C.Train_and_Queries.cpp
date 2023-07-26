//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
   int n, q; cin >> n >> q; int a[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   map<int, int> fo, lo;
   for(int i = 1; i <= n; i++) {
     if(!fo[a[i]]) fo[a[i]] = i;
     lo[a[i]] = i;
   }
   // for(auto u : fo) {
   //  cout << u.first << " " << u.second <<endl;
   // } 
   while(q--) {
     int a, b; cin >> a >> b;
     if(fo.find(a) == fo.end() or fo.find(b) == fo.end()) cout << "NO\n";
     else if(fo[a] <= lo[b]) cout << "YES\n";
     else cout << "NO\n";
   }
  }
  return 0;
}


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
  
//   int t; cin >> t;
//   while(t--) {
//    int n, q; cin >> n >> q; 
//    vector<int> v(n), x(n);
//    for(int i = 0; i < n; i++) {
//      cin >> v[i];
//      x[i] = v[i];
//    }
//    reverse(x.begin(), x.end());
//    while(q--) {
//      int a, b; cin >> a >> b;
//      int p = find(v.begin(), v.end(), a) - v.begin();
//      int q = find(x.begin(), x.end(), b) - x.begin();
//      if(p == n or q == n) cout << "NO\n";
//      else {
//        if(p < (n - 1 - q)) cout << "YES\n";
//        else cout << "NO\n";
//      }
//    }

//   }
//   return 0;
// }

// TLE (n * n)
