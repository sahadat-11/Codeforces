//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int q; cin >> q;
   vector<int> cnt(35, 0);
   while(q--) {
   	 int tp, x; cin >> tp >> x;
   	 if(tp == 1) {
   	 	cnt[x]++;
   	 }
   	 else {
   	 	for(int i = 30; i >= 0; i--) {
   	 	  x -= min(cnt[i], x >> i) << i;
   	 	}
   	 	if(x == 0) cout << "YES\n";
   	 	else cout << "NO\n";
   	 }
   }
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