//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
    int n, k; cin >> n >> k;
    for(int i = 4; i <= k; i++) cout << 1 << " ";
    n -= (k - 3);
    //cout << n << "\n";
    if(n & 1) {
        cout << 1 << " " << n / 2 << " " << n / 2 << "\n";
    }
    else {
        if(n % 4 == 0) {
        cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
        }
        else cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2 << "\n";
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