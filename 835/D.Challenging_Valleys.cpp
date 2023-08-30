//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i]; 
    n = unique(a, a + n) - a; // same value in one segmet
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      if((i == 0 or a[i] < a[i - 1]) and (i == n - 1 or a[i] < a[i + 1])) cnt++;
    }
    if(cnt == 1) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
