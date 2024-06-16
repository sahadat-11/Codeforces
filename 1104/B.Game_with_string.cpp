//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   stack<char> st;
   int cnt = 0;
   for(int i = 0; i < (int)s.size(); i++) {
     if(!st.empty() and s[i] == st.top()) {
      cnt++;
      st.pop();
     }
     else st.push(s[i]);
   }
   if(cnt & 1) cout << "YES\n";
   else cout << "NO\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    string s; cin >> s;
    int cnt = 0;
    for(int i = 1; i < s.size(); i++) {
      if(s[i] == s[i - 1]) {
        s.erase(i - 1, 2);
        i -= 2;
        cnt++;
       // cout << s << " " << cnt << endl;
      }
    }
    if(cnt % 2) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
