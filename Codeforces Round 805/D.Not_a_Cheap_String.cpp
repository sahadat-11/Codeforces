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
    int n; cin >> n;
    map<char, int > mp;
    int sum = 0;
    for(auto u : s) {
      mp[u]++;
      sum += (u - 'a' + 1);
    }
    //cout << sum << endl;
    for(char c = 'z'; c >= 'a'; c--) {
      while(sum > n and (mp[c])) {
        sum -= (c - 'a' + 1);
        mp[c]--;
      }
    }
   // cout << sum<< endl;
    for(auto u : s) {
      if(mp[u]) {
        cout << u;
        mp[u]--;
      }
    }
    cout << "\n";
  }
  return 0;
}
