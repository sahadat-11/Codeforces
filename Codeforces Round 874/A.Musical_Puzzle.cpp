//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n; cin >> n; 
    string s; cin >> s;
    unordered_map<string, int> mp;
    for(int i = 0; i < n - 1; i++) {
        string x = s.substr(i, 2);
        mp[x]++;
    }
    cout << mp.size() << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
} 

// approach 2:

#include<bits/stdc++.h>
using namespace std;
void solve() {
  set <string> ans;
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0; i + 1 < n; i++) {
    ans.insert(s.substr(i, 2));
  }
  cout << ans.size() << endl;
}
int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}