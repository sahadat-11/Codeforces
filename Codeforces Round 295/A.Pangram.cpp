//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  set<char> st;
  for(auto u : s) {
    st.insert(tolower(u));
  }
  if(st.size() == 26) cout << "YES\n";
  else cout << "NO\n";
  return 0;
  
}