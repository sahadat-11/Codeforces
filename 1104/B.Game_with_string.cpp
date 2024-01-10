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
    stack<char> st;
    for(int i  = 0; i < s.size(); i++) {
      if(st.size() >= 1 and st.top() == s[i]) {
        cnt++;
        st.pop();
      }
      else {
        st.push(s[i]);
      }
    }
    if(cnt % 2) cout << "YES\n";
    else cout << "NO\n";
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