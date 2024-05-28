//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, p, q; cin >> n >> a >> b >> p >> q;
    ll x = (1ll * a / (__gcd(a, b)) * b);
    //cout << x << endl;
    int both = n / x;
    int red = n / a - both;
    int blue = n / b - both;
    if(p > q) red += both;
    else blue += both;
    ll ans = 1ll * red * p + 1ll * blue * q;
    cout << ans << "\n";
    return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, a, b, p, q; cin >> n >> a >> b >> p >> q;
   int lcm = a / (__gcd(a, b)) * b;
   int x = n / a * p;
   int y = n / b * q;
   int z = min(p, q) * (n / lcm);
   cout << x + y - z << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}