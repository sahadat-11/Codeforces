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
      int GCD = 0;
      for(int i = 0; i < n - 1; i++) {
         GCD = __gcd(GCD, a[i + 1] - a[i]);
         //cout << GCD << "\n";
      }
      if(GCD == 0) cout << "-1\n";
      else cout << GCD << "\n";
   } 
   return 0;
}
// https://prnt.sc/q1UkK-K9AXPs