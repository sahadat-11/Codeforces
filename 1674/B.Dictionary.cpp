//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  string s; cin >> s;
  int ans = (s[0] - 'a') * 25;
  if(s[0] > s[1]) { 
    ans += (s[1] - 'a' + 1);
  }
  else ans += (s[1] - 'a');
  cout << ans << "\n";
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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int T;
char a, b;
int main() {
  cin >> T;
  while (T--) {
    cin >> a >> b;
    int ans = (a - 97) * 25 + b - 97;
    if (b < a) ans++;
    cout << ans << endl;
  }
  return 0;
}