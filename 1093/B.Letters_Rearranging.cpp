//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int t; cin >> t;
  while(t--) {
    string s; cin >> s;
    string x = s;
    sort(s.begin(), s.end());
    sort(x.rbegin(), x.rend());
    if(x == s) cout << "-1\n";
    else {
      cout << s << "\n";
    }
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin  >> s;
   sort(s.begin(), s.end());
   int n = s.size();
   if(s[0] == s[n - 1]) cout << "-1\n";
   else cout << s << "\n";
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