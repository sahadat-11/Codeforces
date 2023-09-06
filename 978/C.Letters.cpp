//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      ll n, m; cin >> n >> m; ll a[n + 1], b[m], pre[n + 1] = {0};
      for(ll i = 1; i <= n; i++) {
        cin >> a[i];
      }
      for(ll i = 0; i < m; i++) {
        cin >> b[i];
      }
      for(ll i = 1; i <= n; i++) {
        pre[i] = a[i] + pre[i - 1];
      }
      // for(ll i = 0; i <= n; i++) {
      //  cout << pre[i] << " ";
      // }
      for(ll i = 0; i < m; i++) {
        ll dormitory = lower_bound(pre, pre + n + 1, b[i]) - pre;
        ll room = b[i] - pre[dormitory - 1];
        cout << dormitory << " " << room << "\n";
      }
    return 0;
} 


// approach 2:

#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int n, m;
ll a[200005];
int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        ll x;
        cin >> x;
        a[i] = a[i-1] + x;
    }
    while (m--) {
        ll x;
        cin >> x;
        int p = lower_bound(a + 1, a + n + 1, x) - a;
        cout << p << " " << x - a[p-1] << "\n";
    }
    return 0;
} 