//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 int n; string s; cin >> n >> s;
   	 map<ll, ll> mp;
     mp[0] = 1;
     ll sum = 0, ans = 0;
     for(ll i = 0; i < n; i++) {
     	sum += (s[i] - '0' - 1);
     	ans += mp[sum];
     	mp[sum]++;
     }
     cout << ans << "\n";
   }
   return 0;
}
//https://prnt.sc/QfYt2afzvHwF