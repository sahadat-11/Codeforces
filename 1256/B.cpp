//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   vector<bool> used(n + 1, false); 
   for(int cnt = 1; cnt < 100; cnt++) {
   	for(int i = n; i > 1; i--) {
      if(a[i] < a[i - 1] and !used[i]) {
        swap(a[i], a[i - 1]);
        used[i] = true;
      }
   	}
   }
   for(int i = 1; i <= n; i++) {
   	cout << a[i] << " ";
   }
   cout << "\n";
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