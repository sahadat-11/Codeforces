//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n + 1];
    map<int, int> mp;
    for(int i = 1; i <= n; i++) {
      cin >> a[i];
      mp[a[i]]++;
    }
    int cnt[n + 1] = {0};
    for(int i = 1; i <= n; i++) {
      for(int j = i; j <= n; j += i) {
        cnt[j] += mp[i];
      }
    }
    cout << *max_element(cnt + 1, cnt + n + 1) << "\n";
  }
}
// approach 2: more efficient
#include <bits/stdc++.h>
using namespace std; 
using ll = long long;  
int32_t main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); 
  int tt; 
  cin >> tt; 
  while (tt--) {
    int n;
    cin >> n; 
    map<int, int> f;
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x; 
      f[x]++; 
    }
    vector<int> cnt(n + 1, 0); 
    for (auto [v, c] : f) {
      for (int j = v; j <= n; j += v) {
        cnt[j] += c;
      }
    }
    cout << *max_element(cnt.begin(), cnt.end()) << '\n';
  }
  return 0; 
}