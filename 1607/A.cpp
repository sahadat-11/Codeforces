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
    string keyboard, s; cin >> keyboard >> s;
    map<char, int> mp;
    for(int i = 0; i < keyboard.size(); i++) {
      mp[keyboard[i]] = i + 1;
    }
    //for(auto u : mp) cout << u.first << " " << u.second << endl;
    ll sum = 0;
    for(int i = 0; i < s.size() - 1; i++) {
      sum += abs(mp[s[i]] - mp[s[i + 1]]);
    }
    cout << sum << "\n";
  }
  return 0;
}