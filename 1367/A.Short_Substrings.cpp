//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    string s; cin >> s;
    for(int i = 0; i < s.size() - 1; i += 2) cout << s[i];
    cout << s[s.size() - 1];
    cout << "\n";
  }
  return 0;
}
// approach 2:
#include <bits/stdc++.h>
using namespace std;
int q;
string s, ans;
int main() {
  cin >> q;
  while (q--) {
    cin >> s;
    ans = s[0];
    for (int i = 1; i < s.size(); i += 2) ans += s[i];
    cout << ans << endl;
  }
}