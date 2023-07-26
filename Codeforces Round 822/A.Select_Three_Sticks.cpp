//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      sort(a, a + n);
      int mn = INT_MAX;
      for(int i = 0; i < n - 2; i++) {
         int dif = abs((a[i+1] - a[i]) - (a[i+1] - a[i+2]));
         mn = min(mn, dif);
      }
      cout << mn << "\n";
    }
    return 0;
}
