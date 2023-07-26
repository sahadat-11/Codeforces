//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  string s; cin >> s;
  map<char, int> mp;
  for(auto u : s) mp[u]++;
  vector<int> v;
  for(auto u : mp) v.push_back(u.second);
  sort(v.rbegin(), v.rend());
  //for(auto u : v) cout << u << " ";
  ll sum = 0;
  for(auto u : v) {
     int x = min(u, k);
     sum += (1ll*x * x);
     k -= u;
     if(k < 0) break;
  } 
  cout << sum << '\n';
  return 0;
  
}