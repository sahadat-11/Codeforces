//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int x, y, a, b; cin >> x >> y >> a >> b;
        ll ans1 = 1ll * x * a + 1ll * y * a;
        ll ans2 = 1ll * min(x, y) * b + (max(x, y) - 1ll * min(x, y)) * a;
        //cout << ans1 << " " << ans2 <<"\n";
        cout << min(ans1, ans2) << "\n";
        
    }
	return 0;
} 