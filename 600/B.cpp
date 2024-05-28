//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(n), b(m);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < m; i++) cin >> b[i];
   // o_set<int> st;
   // for(int i = 0; i < n; i++) {
   // 	 st.insert()
   // }
   sort(a.begin(), a.end());
   for(int i = 0; i < m; i++) {
     int x = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
     cout << x << "\n";
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