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
  int n; string s; cin >> n >> s;
  string r = s;
  reverse(r.begin(), r.end());
  map<char, vector<int>> mp1, mp2;
  for(int i = 0; i < n; i++) {
    mp1[s[i]].push_back(i);
  }
  for(int i = 0; i < n; i++) {
    mp2[r[i]].push_back(i);
  }
  int p[n] = {0};
  for(char ch = 'a'; ch <= 'z'; ch++) {
    for(int i = 0; i < mp1[ch].size(); i++) {
      p[mp2[ch][i]] = mp1[ch][i];
    }
  }
  //for(int i = 0; i < n; i++) cout << p[i] << " ";
  o_set<int> st;
  ll ans = 0;
  for(int i = n - 1; i >= 0; i--) {
    ans += st.order_of_key(p[i]);
    st.insert(p[i]);
  }
  cout << ans << "\n";
  return 0;
}
//https://prnt.sc/lO_Q2-3Hnjft