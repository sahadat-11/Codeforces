//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) cin >> b[i];
   vector<int> power(n + 1, 0);
   for(int i = 0; i < n; i++) {
   	power[abs(b[i])] += a[i];
   }
   int mypower = k; bool flag = true;
   for(int i = 1; i <= n; i++) {
   	if(mypower < power[i]) flag = false;
   	mypower -= power[i];
   	mypower += k;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
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