//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int h, m; char c; cin >> h >> c >> m;
   int x; cin >> x;
   int total = h * 60 + m + x;
   //cout << (total / 60) % 24 << " " << total % 60 << "\n";
   int hh = (total / 60) % 24;
   int mm = total % 60;
   if(hh < 10) cout << 0; cout << hh << ":";
   if(mm < 10) cout << 0; cout << mm << "";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}