//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	ll n, m, k; cin >> n >> m >> k; ll a[n], b[m];
  	ll sum = 0;
  	for(int i = 0; i < n; i++) {
  		cin >> a[i];
  		sum += a[i];
  	}
  	for(int i = 0; i < m; i++) {
  		cin >> b[i];
  	}
  	ll mx1 = *max_element(a, a + n);
  	ll mx2 = *max_element(b, b + m);
  	ll mn1 = *min_element(a, a + n);
  	ll mn2 = *min_element(b, b + m);
  	ll mx = max(mx1, mx2);
  	ll mn = min(mn1, mn2);
  	bool flag = false;
  	for(int i = 0; i < n; i++) {
  		if(a[i] == mx) flag = true;
  	}
  	ll ans;
  	if(k % 2) {
  		if(flag) {
  			if(k == 1) ans = sum;
  			else {
  				if(mn1 > mn2) sum -= (mn1 - mn2);
  				else sum = ans;
  			}
  		} 
  		else {
  			if(k == 1) ans = sum + mx - mn1;
  			else {
  				ans = sum + mx - mn;
  			}
  		}
  	}
  	else {
  		if(flag) {
  			if(k == 2) ans = sum - mx + mn2;
  			else {
  				if(mn1 > mn2) ans = sum - mx + (mn1 - mn2);
  				else ans = sum - mx + mn2; 
  			}
  		} 
  		else {
  			if(mn1 > mn2) ans = sum - mx + (mn1 - mn2);
  			else ans = sum - mx + mn2;
  		}
  	}
  	cout << ans << "\n";
  }
  return 0;
}
