//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; cin >> n;
     int mn = INT_MAX;
     while(n--) {
       int d, s; cin >> d >> s;
       mn = min(mn, (d + (s - 1) / 2));
     }
     cout << mn << "\n"; 
   }
   return 0;
}
