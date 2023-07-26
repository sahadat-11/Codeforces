//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  string s; cin >> s;

  map<string, int> mp;

  for(int i = 0; i < n - 1; i++) {
    string x = s.substr(i, 2);
    mp[x]++;
  }
  
  int mx = 0; string mxs;
  for(auto u : mp) {
    if(u.second > mx) {
      mx = u.second;
      mxs = u.first;
    }
  }
  cout << mxs << "\n";

  return 0;
}
