//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(k);
   for(int i = 0; i < k; i++) {
     cin >> a[i];
   }
   int sum = a[0];
   for(int i = 1; i < k; i++) {
    int req = a[i] - sum;
    sum += req;
    a[i] = req;
   }
//    for(int i = 0; i < k; i++) {
//     cout << a[i] << " ";
//    }
//    cout << "\n";
   if(is_sorted(a.begin(), a.end())) {
     cout << "YES\n";
   }
   else {
     cout << "NO\n";
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