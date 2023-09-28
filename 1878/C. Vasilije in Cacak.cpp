//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 ll n, k, x; cin >> n >> k >> x;
   	 ll mnsum = k * (k + 1) / 2;
   	 ll mxsum = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
   	 //cout << mnsum << " " << mxsum << "\n";
   	 if(x >= mnsum and x <= mxsum) cout << "YES\n";
   	 else cout << "NO\n";
   }
  
   
   return 0;
}