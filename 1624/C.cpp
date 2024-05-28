//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 55, mod = 1e9 + 7;
#define int long long
bool used[N];
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   for(int i = 0; i < n; i++) {
   	int x = v[i];
   	while(x) {
   	  if(x <= n and !used[x]) {
   	  	used[x] = true; break;
   	  }
   	  else {
   	  	x /= 2;
   	  }
   	}
   }
   for(int i = 1; i <= n; i++) {
   	if(!used[i]) {
   	  cout << "NO\n"; return;
   	}
   }
   cout << "YES\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
    for(int i = 1; i < N; i++) used[i] = false;
  }
  return 0;
}