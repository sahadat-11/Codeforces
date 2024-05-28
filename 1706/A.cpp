//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   string s;
   for(int i = 0; i < m; i++) s.push_back('B');
   for(int i = 0; i < n; i++) {
   	int a = v[i] - 1;
   	int b = m - v[i];
   	//cout << a << " " << b << endl;
   	int x = min(a, b);
   	int y = max(a, b);
   	if(x >= 0 and s[x] == 'B') {
   	  s[x] = 'A';
   	}
   	else {
   	  s[y] = 'A';
   	}
   }
   cout << s << "\n";
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