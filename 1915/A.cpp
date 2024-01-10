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
      ll sum = 0;
      for(int i = 0; i < n; i++) {
         cin >> a[i]; 
         sum += a[i];
      }
      ll x = sqrtl(sum);
      if(x * x == sum) cout << "YES\n";
      else cout << "NO\n";
   }
   return 0;
}
