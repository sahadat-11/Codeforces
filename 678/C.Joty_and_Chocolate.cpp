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
