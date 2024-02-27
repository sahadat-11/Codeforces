//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v1(n);
   for(int i = 0; i < n; i++) cin >> v1[i];
   int m; cin >> m;
   vector<int> v2(m);
   for(int i = 0; i < m; i++) cin >> v2[i];
   sort(v1.begin(), v1.end());
   sort(v2.begin(), v2.end());
   cout << v1[n - 1] << " " << v2[m - 1];
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}