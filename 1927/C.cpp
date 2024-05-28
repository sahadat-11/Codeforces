//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m, k; cin >> n >> m >> k;
   vector<int> a(n), b(m);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < m; i++) cin >> b[i];
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   auto ip1 = unique(a.begin(), a.end());
   a.resize(distance(a.begin(), ip1));
   auto ip2 = unique(b.begin(), b.end());
   b.resize(distance(b.begin(), ip2));
   int ind1 = upper_bound(a.begin(), a.end(), k) - a.begin();
   int ind2 = upper_bound(b.begin(), b.end(), k) - b.begin();
   //cout << ind1 << " " << ind2 << "\n";
   set<int> st;
   for(int i = 0; i < (int)a.size(); i++) {
   	if(a[i] <= k) st.insert(a[i]);
   }
   for(int i = 0; i < (int)b.size(); i++) {
   	if(b[i] <= k) st.insert(b[i]);
   }
   bool flag = true;
   if(ind1 < k / 2 or ind2 < k / 2) flag = false;
   else if(st.size() < k) flag = false; 
   if(flag) cout << "YES\n";
   else cout << "NO\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}