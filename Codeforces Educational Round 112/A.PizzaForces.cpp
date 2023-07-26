//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
   ll n; cin >> n;
   if(n < 6) n = 6;
   ll x = n / 6;
   ll y = (x - 1) * 6;
   ll z = n - y; //under 12 value; 
   if(z & 1) z++; // if odd then the number even;
   if(z < 6) z = max(1ll * 6, z);
   //cout << x << " " << y << " " << z << "\n";
   ll ans = (y / 2 * 5) + (z / 2 * 5);
   cout << ans << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     solve();
   }
    return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << max(6LL, n + 1) / 2*5 << endl;
    }
    return 0; 
}