//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   bool flag = true;
   for(int i = 1; i < n; i++) {
    if(a[i] == 1 and a[i - 1] > 1) {
        flag = false;
    }
   }
   if(!flag) {
    cout << "-1\n"; return;
   }
   int ans = 0, k = 0;
   for(int i = 1; i < n; i++) {
    k += ceil(log2(abs(log2(a[i - 1])/log2(a[i]))));
    cout << k << " ";
    k = max(0ll, k);
    cout << k << "\n";
    ans += k;
   }
   cout << ans << "\n";
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

// https://chatgpt.com/c/f7c008ad-2d30-4f01-9040-7dcc046a5c9b