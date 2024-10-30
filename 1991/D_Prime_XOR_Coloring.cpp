//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int a[7] = {0, 1, 2, 2, 3, 3, 4};
void solve() {
   int n; cin >> n;
   if(n < 7) {
    cout << a[n] << "\n";
    for(int i = 1; i <= n; i++) {
    	cout << a[i] << " ";
    }
    cout << "\n";
   }
   else {
   	cout << 4 << "\n";
    for(int i = 1; i <= n; i++) {
        cout << i % 4 + 1 << " ";
    }
    cout << "\n";
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