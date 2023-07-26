//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     ll n, m; cin >> n >> m; ll a[n + 1];
     for(int i = 0; i < n; i++) cin >> a[i];
     sort(a, a + n);
     a[n] = a[0];
     ll sum = 0;
     for(ll i = 0; i < n; i++) {
      sum += max(a[i], a[i + 1]);
     }
     sum += n; // for people 
     if(sum > m) cout << "NO\n";
     else cout << "YES\n";
   }
    return 0;
}

// approach 2: 

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     ll n, m; cin >> n >> m; ll a[n];
     for(int i = 0; i < n; i++) cin >> a[i];
     sort(a, a + n);
     ll sum = a[0] * 2 + 1;
     for(ll i = 1; i < n - 1; i++) sum += (2 * a[i] - a[i - 1] + 1);
     sum += (2 * a[n - 1] - a[0] - a[n - 2] + 1);
     //cout << sum << "\n";
     if(sum > m) cout << "NO\n";
     else cout << "YES\n";
   }
    return 0;
}
