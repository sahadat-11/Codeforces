//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; cin >> n;
     int sum1 = 0, sum2 = 0;
     for(int i = 0; i < n; i++) {
       int x; cin >> x;
       if(x & 1) sum2 += x;
       else sum1 += x;
     }
     if(sum1 > sum2) cout << "YES\n";
     else cout << "NO\n";
   }
   return 0;
}
