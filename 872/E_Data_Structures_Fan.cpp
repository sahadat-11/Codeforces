//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
    cin >> a[i];
   }
   string s; cin >> s;
   int q; cin >> q;
   while(q--) {
    int ty; cin >> ty;
    if(ty == 1) {
       int l, r; cin >> l >> r;
       --l; --r;
       for(int i = l; i <= r; i++) {
         if(s[i] == '0') s[i] = '1';
         else s[i] = '0';
       }
    }
    else {
        int XOR = 0;
        int bit; cin >> bit;
        for(int i = 0; i < n; i++) {
          if(bit == (s[i] - '0')) {
            XOR = (XOR ^ a[i]);
          }
        }
        cout << XOR << " ";
    }
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

// O(N * Q);