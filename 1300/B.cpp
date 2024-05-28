//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(2 * n);
   for(int i = 0; i < 2 * n; i++) cin >> v[i];
   sort(v.begin(), v.end());
   //cout << v[n] << " " << v[n - 1] << endl;
   cout << (v[n] - v[n - 1]) << "\n";
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

// https://prnt.sc/UWfazmcHOoBy