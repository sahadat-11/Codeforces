//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b, ans; cin >> a >> b;
  for(int i = 0; i < a.size(); i++) {
    if(a[i] != b[i]) ans += '1';
    else ans += '0';
  }
  cout << ans;
  return 0;
}
