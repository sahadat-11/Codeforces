//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, c; cin >> n >> c; int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++;
    }
    int sum = 0;
    for(auto u : mp) {
      sum += min(c, u.second);
    }
    cout << sum << "\n";
  }
  return 0;
}