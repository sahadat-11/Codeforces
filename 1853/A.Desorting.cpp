//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n; int a[n], b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  } 
  sort(b, b + n);
  bool flag = true;
  for(int i = 0; i < n; i++) {
    if(a[i] != b[i]) flag = false;
  }
  int mn = INT_MAX;
  for(int i = 0; i < n - 1; i++) {
    mn = min(mn, a[i + 1] - a[i]);
  }
  if(flag) cout << (mn + 2) / 2 << "\n";
  else cout << 0 << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      solve();
   }
   return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   if(!is_sorted(v.begin(), v.end())) {
      cout << "0\n";
   }
   else {
      int mn = INT_MAX;
      for(int i = 1; i < n; i++) {
         mn = min(mn, v[i] - v[i - 1]);
      }
      cout << (mn + 2) / 2 << "\n";
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