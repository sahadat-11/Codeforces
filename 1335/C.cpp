//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   set<int> st;
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
   	 st.insert(a[i]);
   	 mp[a[i]]++;
   } 
   int mx = 0;
   for(auto [u, v] : mp) {
   	mx = max(mx, v);
   }
   int ans;
   if(mx == st.size()) ans = mx - 1;
   else ans = min(mx, (int)st.size());
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}