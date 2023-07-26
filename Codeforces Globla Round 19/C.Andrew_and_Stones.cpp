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
    ll ans = 0;
    bool possible = false;
    for(int i = 1; i < n - 1; i++) {
      if(a[i] != 1) possible = true;
      ans += (a[i] + 1) / 2;
    }
    //cout << ans <<endl;
    if(!possible or (n == 3 and a[1] % 2)) cout << -1 << "\n";
    else cout << ans << "\n";
  }
  return 0;
}


