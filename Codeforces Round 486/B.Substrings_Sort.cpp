//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; string s[n];
  multimap<int, string> mp;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
    int x = s[i].size();
    mp.insert({x, s[i]});
  }
  // for(auto u : mp) {
  //   cout << u.first << " " << u.second << "\n";
  // }
  string ans[n]; int c = 0;
  for(auto u : mp) {
    ans[c] = u.second;
    c++;
  }
 // for(int i = 0; i < n; i++) cout << ans[i] << "\n";
  bool flag = true; int cnt = 0;
  for(int i = 0; i < n - 1; i++) {
    string x = ans[i], y = ans[i + 1];
    if(y.find(x) != -1) cnt++;
  }
  //cout << cnt << endl;
  if(cnt != n - 1) flag = false;
  if(flag) {
    cout << "YES\n";
    for(int i = 0; i < n; i++) cout << ans[i] << "\n";
  }
  else cout << "NO\n";
  return 0;
}

// approach 2:

  #include <bits/stdc++.h>
  using namespace std;
  string s[104];
  bool cmp(string a, string b) {
    return a.size() < b.size();
  }

  int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    sort(s, s + n, cmp);
    for (int i = 1; i < n; i++) {
      if (s[i].find(s[i - 1]) == s[i].npos) { // not found
        cout << "NO\n";
        return 0;
      }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
      cout << s[i] << endl;
    return 0;
  }
