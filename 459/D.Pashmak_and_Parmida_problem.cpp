#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int l[N], r[N];
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  map<int, int> cnt;
  for(int i = 1; i <= n; i++) {
    cnt[a[i]]++;
    l[i] = cnt[a[i]];
  }
  cnt.clear();
  for(int i = n; i >= 1; i--) {
    cnt[a[i]]++;
    r[i] = cnt[a[i]];
  }
  //for(int i = 1; i <= n; i++) cout << l[i] << " "; cout << "\n";
  //for(int i = 1; i <= n; i++) cout << r[i] << " "; cout << "\n";
  o_set<pair<int, int>> st;
  ll ans = 0;
  for(int i = n; i >= 1; i--) {
    ans += st.order_of_key({l[i], i});
    st.insert({r[i], i}); 
  }
  cout << ans << "\n";
  return 0;
}
//https://prnt.sc/ncycjZWjyeug