//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i]; 
   int cnt = 0, x = 1e6, y = 1e6;
   for(int i = 0; i < n; i++) {
     if(x > y) swap(x, y);
     if(x >= v[i]) x = v[i];
     else if(y >= v[i]) y = v[i];
     else {
      x = v[i]; cnt++;
     }   
   }
   cout << cnt << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/q9F-IN1DgxQc