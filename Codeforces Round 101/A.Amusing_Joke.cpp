//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b, c; cin >> a >> b >> c;
  string d = a + b;
  sort(c.begin(), c.end());
  sort(d.begin(), d.end());
  if(c == d) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}