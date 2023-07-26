//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  list<int> ls;
  for(int i = 1; i <= m; i++) ls.push_back(i);
  while(n--) {
    int l, r; cin >> l >> r;
    for(int i = l; i <= r; i++) ls.remove(i);
  }
  cout << ls.size() << "\n";
  for(auto u : ls) cout << u << " ";
  return 0;
}