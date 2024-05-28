//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; string s; cin >> n >> k >> s;
   map<char, int> mp;
   for(int i = 0; i < n; i++) {
   	mp[s[i]]++;
   }
   //for(auto [u, v] : mp) cout << u << " " << v << endl;
   int pair = 0, non_pair = 0;
   for(auto [c, cnt] : mp) {
     pair += cnt / 2;
     non_pair += cnt % 2;
   }
   non_pair += 2 * (pair % k);
   bool flag = false;
   if(non_pair >= k) flag = true;
   cout << 2 * (pair / k) + flag << "\n";
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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  map<char, int> freq;
  for (char c: s) ++freq[c];
  int pairs = 0;
  for (auto [c, f] : freq) {
    pairs += f / 2;
  }
  int ans = pairs / k * 2;
  if (n - ans * k >= k) ++ans;
  cout << ans << '\n';
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
