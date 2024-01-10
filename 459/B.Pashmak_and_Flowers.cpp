//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; int a[n + 1];
   for(int i = 0; i < n; i++) cin >> a[i];
   map<int, int> mp;
   for(int i = 0; i < n; i++) mp[a[i]]++;
   int mn = *min_element(a, a + n);
   int mx = *max_element(a, a + n);
   cout << mx - mn << " ";
   if(mx == mn) { // if all are equal that means count = n;
   	 cout << (1ll * n * (n - 1) / 2);
   }
   else { //max different provibe only max and min element;
     cout << (1ll * mp[mx] * mp[mn]);
   } 
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// https://prnt.sc/PKeU8hKI3Wuh