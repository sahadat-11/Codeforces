//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  set<char> st;
  for(auto u : s) st.insert(u);
  if(st.size() % 2) cout << "IGNORE HIM!";
  else cout << "CHAT WITH HER!";
  return 0;
}