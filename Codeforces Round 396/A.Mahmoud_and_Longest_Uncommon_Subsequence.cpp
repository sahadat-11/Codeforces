//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  if(a == b) cout << -1;
  else cout << max(a.size(), b.size());
  return 0; 
}