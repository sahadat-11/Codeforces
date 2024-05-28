//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(2 * n);
   vector<int> even, odd;
   for(int i = 0; i < 2 * n; i++) {
     cin >> v[i];
     if(v[i] % 2) odd.push_back(i + 1);
     else even.push_back(i + 1);
   }
   vector<pair<int, int>> ans;
   for(int i = 0; i + 1 < odd.size(); i += 2) {
     ans.push_back({odd[i], odd[i + 1]});
   }
   for(int i = 0; i + 1 < even.size(); i += 2) {
     ans.push_back({even[i], even[i + 1]});
   }
   for(int i = 0; i < n - 1; i++) {
     cout << ans[i].first << " " << ans[i].second << "\n";
   }
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(2 * n);
   for(int i = 0; i < 2 * n; i++) cin >> v[i];
   vector<int> even, odd;
   for(int i = 0; i < 2 * n; i++) {
    if(v[i] % 2) odd.push_back(i + 1);
    else even.push_back(i + 1); 
   }
   int e = even.size(), o = odd.size();
   if(e % 2 == 0) {
      if(e >= 2) e -= 2;
      else o -= 2;
   }
   // for(auto u : even) cout << u << " "; cout << "\n";
   // for(auto u : odd) cout << u << " "; cout << "\n";
   // cout << e << " " << o << endl;
   for(int i = 1; i < e; i += 2) {
   	cout << even[i] << " " << even[i - 1] << "\n";
   }
   for(int i = 1; i < o; i += 2) {
   	cout << odd[i] << " " << odd[i - 1] << "\n";
   }
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