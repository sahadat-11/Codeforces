//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   int N = count(s.begin(), s.end(), 'N');
   int S = count(s.begin(), s.end(), 'S');
   int E = count(s.begin(), s.end(), 'E');
   int W = count(s.begin(), s.end(), 'W');
   int nsmn = min(N, S);
   int nsmx = max(N, S);
   int ewmn = min(E, W);
   int ewmx = max(E, W);
   int xx = nsmx - nsmn;
   int yy = ewmx - ewmn;
   if(xx % 2 or yy % 2 or (xx == nsmx and yy == ewmx)) {
    cout << "NO\n";
   }
   else {
    cout << "YES\n";
    for(int i = 0; i < nsmn; i++) cout << 'R'
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}