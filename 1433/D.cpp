//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n), v1(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   v1 = v;
   sort(v1.begin(), v1.end());
   if(v1[0] == v1[n - 1]) {
   	cout << "NO\n"; return;
   }
   cout << "YES\n";
   int p; 
   for(int i = 1; i < n; i++) {
   	 if(v[0] != v[i]) {
   	 	cout << 1 << " " << i + 1 << "\n";
   	 	p = i + 1;
   	 }
   }
   for(int i = 1; i < n; i++) {
   	 if(v[0] == v[i]) {
   	 	cout << p << " " << i + 1 << "\n";
   	 }
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