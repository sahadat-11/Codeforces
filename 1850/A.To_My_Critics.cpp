//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int a, b, c; cin >> a >> b >> c;
    if(a + b >= 10 or a + c >= 10 or b + c >= 10) cout << "YES\n";
    else cout << "NO\n";
  }
}