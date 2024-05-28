//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) cin >> b[i];
   bool flag = true;
   int one = 0, zero = 0;
   for(auto u : b) {
   	 if(u == 1) one++;
   	 else zero++;
   }
   if(zero == 0 or one == 0) {
   	 if(is_sorted(a.begin(), a.end())) {
   	 	flag = true;
   	 }
   	 else flag = false;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}