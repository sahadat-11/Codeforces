//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	int n, k; cin >> n >> k; int a[n], b[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      for(int i = 0; i < n; i++) cin >> b[i];
      int total = 0, mxb = 0, mxans = 0;
      for(int i = 0; i < min(n, k); i++) {
         mxb = max(mxb, b[i]);
         total += a[i];
         int rem = k - i - 1; // for 0 indexing
         mxans = max(mxans, total + rem * mxb);
      }
      cout << mxans << "\n";
   }
   return 0;
}