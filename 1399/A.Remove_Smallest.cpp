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
    sort(a, a + n);
    bool flag = true;
    for(int i = 0; i < n - 1; i++) {
      if(a[i + 1] - a[i] > 1) flag = false;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}