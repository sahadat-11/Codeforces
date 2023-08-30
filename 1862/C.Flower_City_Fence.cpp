//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	int n; cin >> n; int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
      if(a[i] > n) break;
      if(a[a[i]] >= i) cnt ++;
    }
    if(cnt == n) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}