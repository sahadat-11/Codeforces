//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	//int t; cin >> t;
    //while(t--) {
        ll n, d; cin >> n >> d; ll a[n];
        for(ll i = 0; i < n; i++) cin >> a[i];
         sort(a, a + n, greater<ll>());
        //for(ll i = 0; i < n; i++) cout << a[i] << " ";
        ll x = n;
        ll cnt = 0;
        for(ll i = 0; i < x; i++) {
           ll temp = (d + a[i]) / a[i];
           if(a[i] * n > d) cnt++;
           //cout << temp;
           n -= temp; 
           if(n <= 0) break; 
        }
        cout << cnt << endl;
   // }
    return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long d;
  cin >> d;
  vector < int > v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(v.rbegin(), v.rend());
  int ans = 0, point = 0;
  for (int i = 0; i < n; i++) {
    point += (d / v[i] + 1);
    if (point > n) break;
    ans++;
  }
  cout << ans << endl;
}