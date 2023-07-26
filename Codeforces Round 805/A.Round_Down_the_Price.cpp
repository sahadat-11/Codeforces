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
    set<char> st;
    int cnt = 1;
    for(auto u : s) {
      st.insert(u);
      if(st.size() > 3) {
        cnt++;
        st.clear();
        st.insert(u);
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}
