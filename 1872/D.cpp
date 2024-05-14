//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x, y; cin >> n >> x >> y;
   int lcm = x / (__gcd(x, y)) * y;
   int a = n / x - n / lcm;
   int b = n / y - n / lcm;
   int c = n - a;
   int sum1 = n * (n + 1) / 2 - c * (c + 1) / 2;
   int sum2 = b * (b + 1) / 2;
   //cout << sum1 << " " << sum2 << "\n";
   cout << sum1 - sum2 << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   while(t--) {
     ll n, x, y; cin >> n >> x >> y;
     ll g = __gcd(x, y);
     ll l = (x / g) * y;
     ll a = (n / x) - (n / l);
     ll b = (n / y) - (n / l);
     
     ll sumx = n * (n + 1) / 2 - (n - a) * (n - a + 1) / 2;
     ll sumy = b * (b + 1) / 2;
     cout << sumx - sumy << "\n";
   }
   
   return 0; 
}