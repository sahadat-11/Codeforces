//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int one = 0, two = 0;
   for(int i = 0; i < n; i++) {
     if(v[i] == 1) one++;
     else two++;  
   }
   bool flag = true;
   if(one == 0 and two % 2) flag = false;
   one += (two % 2) * 2;
   if(one % 2) flag = false;
   if(!flag) cout << "NO\n";
   else cout << "YES\n";
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