//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   if(n & 1) cout << "0\n";
   else {
      n /= 2;
   ll cnt = 0;
   for(ll i = 1, j = n - 1; i < j; i++, j--) {
      cnt++;
      //cout << i << " " << j << endl;
   }
   cout << cnt << "\n";
   }
   
   return 0;
}