//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n], b[n];
      int l1 = 0, l2 = 0, ans = 0;
      for(int i = 0; i < n; i++) {
         cin >> a[i];
         if(a[i] == 1) l1++;
      }
      for(int i = 0; i < n; i++) {
         cin >> b[i];
         if(b[i] == 1) l2++;
      }
      for(int i = 0; i < n; i++) {
         if(a[i] != b[i]) ans++;
      }
      ans = min(ans, abs(l1 - l2) + 1); // (l2 - l1)= dife; +1 for rearrange;
      cout << ans << "\n";
   }
    return 0;
}
