//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> mp;
   for(int i = 0; i < n; i++) mp[v[i]]++;
   vector<int> fre;
   for(auto [val, cnt] : mp) {
   	fre.push_back(cnt);
   }
   int x = fre.size();
   sort(fre.begin(), fre.end());
   int ans = INT_MAX;
   for(int i = 0; i < x; i++) {
   	ans = min(ans, n - (x - i) * fre[i]);
   }
   cout << ans << "\n";
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


#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a) {
    cin >> x;
  }
  map<int, int> cnt;
  for (auto &x : a) {
    cnt[x]++;
  }
  vector<int> cntcnt(n + 1);
  for (auto &[x, y] : cnt) {
    cntcnt[y]++;
  }
  int cur = 0;
  int ans = 1e9 + 10;
  for (int i = n; i >= 0; i--) {
    cur += cntcnt[i];
    ans = min(ans, n - cur * i);
  }
  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}