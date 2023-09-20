 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   vector<ll> v; ll sum = 0;
   v.push_back(0);
   for(int i = 0; i < n; i++) {
      ll a, b; cin >> a >> b;
      sum += (a * b);
      v.push_back(sum);
   }
   //sort(v.begin(), v.end());
   //for(auto u : v) cout << u << endl;
   while(m--) {
      int x; cin >> x;
      cout << lower_bound(v.begin(), v.end(), x) - v.begin() << endl;
   }
   return 0;
}
