//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     ll n; cin >> n;
     bool flag = false;
     while(n % 2 == 0) {
       n /= 2;
     }
     if(n > 1) flag = true;
     if(flag) {
       cout << "YES\n";
     }
     else {
       cout << "NO\n";
     }
   }
   return 0;
}
