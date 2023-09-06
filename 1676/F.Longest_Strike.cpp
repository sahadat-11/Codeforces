//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k; int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++; 
    }
    sort(a, a + n);
    int L = -1, R = -1;
    int l = -1, r;
    for(int i = 0; i < n; i++) {
      if(mp[a[i]] < k) continue;
      if(l == -1) {
        l = a[i];
      }
      if(i == n - 1 or a[i + 1] - a[i] > 1 or mp[a[i + 1]] < k) {
        r = a[i];
        if(r - l >= R - L) {
          L = l;
          R = r;
        }
        l = -1, r = -1;
      }
    }
    if(L == -1) cout << -1 << "\n";
    else cout << L << "  " << R << "\n";
  } 
  return 0;
}