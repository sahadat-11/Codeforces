//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 998244353;
#define int long long
int fact(int n) {
  if(n <= 0) return 1;
  return (n * fact(n - 1)) % mod;
}
void solve() {
   string s; cin >> s;
   int n = s.size();
   int consecutive = 1, way = 1, operation = 0;
   for(int i = 1; i < n; i++) {
   	if(s[i] == s[i - 1]) {
   	  consecutive++;
   	}
   	if((s[i] != s[i - 1]) or (i == n - 1)){
      way = (way * consecutive) % mod;
   	  operation += (consecutive - 1);
   	  consecutive = 1;
   	}
   }
   cout << operation << " " << way * fact(operation) % mod << "\n";
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