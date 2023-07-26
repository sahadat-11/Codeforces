//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n + 1], ans[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  set<int> st;
  for(int i = n; i >= 1; i--) {
    st.insert(a[i]);
    ans[i] = st.size();
  }
  for(int i = 1; i <= m; i++) {
    int x; cin >> x;
    cout << ans[x] << "\n";
  }
  return 0;
}