//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   ll n, f, a, b; cin >> n >> f >> a >> b;
   vector<ll> v;
   v.push_back(0);
   for(int i = 0; i < n; i++) {
   	 int x; cin >> x;
   	 v.push_back(x);
   }
   //for(auto u : v) cout << u << "\n";
   ll sum = 0;
   for(int i = 1; i <= n; i++) {
   	 ll dif = v[i] - v[i - 1];
   	 sum += min(dif * a, b);
   }
   //cout << sum << endl;
   if(f > sum) cout << "YES\n";
   else cout << "NO\n";
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