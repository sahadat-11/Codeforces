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


//In The Name of ALLAH
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(n + 1), b(m + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   for(int i = 1; i <= m; i++) {
     cin >> b[i];
   }
   int cnt = 0;
   o_set<pair<int, int>> st;
   for(int i = 1; i <= n; i++) {
    st.insert({a[i], i});
   }
   for(int i = 1; i <= m; i++) {
    cout << st.order_of_key({b[i], n + 1}) << " ";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}