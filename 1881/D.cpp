//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
int spf[N];

void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }

   map<int, int> prime_factors;
   for(int i = 0; i < n; i++) {
   	 int x = a[i];
   	  while(x > 1) {
        int prime = spf[x];
        prime_factors[prime]++;
        x /= prime;
      }
   }

   for(auto [u, cnt] : prime_factors) {
   	 if(cnt % n) {
   	   cout << "NO\n"; return;
   	 }
   }
   cout << "YES\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i < N; i++) spf[i] = i;
  for(int i = 2; i < N; i++) {
   if(spf[i] == i) {
     for(int j = i; j < N; j += i) {
       spf[j] = min(spf[j], i);
     }
   }
  }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}