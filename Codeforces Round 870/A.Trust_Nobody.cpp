//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = -1;
    for(int i = 0; i < n; i++) {
      int cnt = 0;
      for(int j = 0; j < n; j++) {
        if(a[j] > i) cnt++;
      }
      if(cnt == i) ans = cnt;
    }
    cout << ans << "\n";
  }
  
  return 0;
}
