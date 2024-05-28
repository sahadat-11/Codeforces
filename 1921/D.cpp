//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(n), b(m);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < m; i++) cin >> b[i];
   sort(a.begin(), a.end());
   sort(b.rbegin(), b.rend());
   ll sum = 0;
   for(int i = 0; i < n; i++) {
     sum += max(abs(a[i] - b[i]), abs(a[i] - b[m-(n-i)]));
   }
   cout << sum << "\n";
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