//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
bool isprime(int n) {
  if(n <= 1) return false;
  for(int i = 2; i * i <= n; i++) {
    if(n % i == 0) return false;
  }
  return true;
}
void solve() {
   int n; string s; cin >> n >> s;
   for(int i = 0; i < n; i++) {
   	int x = s[i] - '0';
   	if(!isprime(x)) {
   	  cout << 1 << "\n";
   	  cout << x << "\n"; return;
   	}
   }
   for(int i = 0; i < n; i++) {
   	for(int j = i + 1; j < n; j++) {
   	  int x = (s[i] - '0') * 10 + (s[j] - '0');
   	  if(!isprime(x)) {
   	  cout << 2 << "\n";
   	  cout << x << "\n"; return;
   	 }
   	}
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