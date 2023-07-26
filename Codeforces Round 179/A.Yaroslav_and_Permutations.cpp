//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  bool flag = true;
  for(auto u : mp) {
    if(u.second > (n + 1) / 2) flag = false;
  }
  if(flag) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}