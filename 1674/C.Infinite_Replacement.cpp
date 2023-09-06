//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  string a, b;
  cin >> a >> b;
  if (b == "a") cout<<"1\n";
  else if (b.find('a') != -1) cout << "-1\n";
  else cout << (1LL<<(a.length())) << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    solve();
  } 
  return 0;
}