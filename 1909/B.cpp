//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   for(int k = 2; ; k *= 2) {
   	 set<int> st;
   	 for(int i = 0; i < n; i++) {
   	 	st.insert(v[i] % k);
   	 }
   	 if(st.size() == 2) {
   	 	cout << k << "\n";
   	 	return;
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