//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end());
   int ans = 0;
   bool have[110] = {false};
   for(int i = 0; i < n; i++) {
     have[v[i]] = true;
   }
   for(int i = 0; i < k; i++) ans += !have[i];
   ans += have[k];
   cout << ans << "\n";
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

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, x, cnt = 0;
  cin >> n >> x;
  int ara[n];
  for (int i = 0; i < n; i++) {
    cin >> ara[i];
  }
  sort(ara, ara + n);
  for (int i = 0; i < x; i++) {
    if (binary_search(ara, ara + n, i) == 0) cnt++;
  }
  if (binary_search(ara, ara + n, x) == 1) cnt++;
  cout << cnt << endl;
}

// https://prnt.sc/PmS4Mz1d3eOT