//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; string s[n];
  map<string, int> mp;
  for(int i = 0; i < n; i++) cin >> s[i];
  for(int i = 0; i < n; i++) {
     if(mp[s[i]]) cout << "YES\n";
     else cout << "NO\n";
     mp[s[i]]++;
  }
  return 0; 
}