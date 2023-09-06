//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n; int a[n];
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt = 0;
  for(int i = n - 1; i >= 0; i--) {
    if(mp[a[i]]) {
      break;
    }
    mp[a[i]]++;
    cnt++;
  }
  cout << n - cnt << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    solve();
  } 
  return 0;
}
