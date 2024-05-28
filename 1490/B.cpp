//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int z = 0, o = 0, t = 0;
   for(int i = 0; i < n; i++) {
   	int x = v[i] % 3;
   	if(x == 0) z++;
   	else if(x == 1) o++;
   	else t++;
   }
   int e = n / 3; int cnt = 0;
   //cout << z << " " << o << " " << t << " " << e << endl;
   //int x = 5;
   while(true) {
   	if(z > e) {
   	  o += (z - e);
   	  cnt += (z - e);
   	  z = e;
   	}
   	if(o > e) {
   	  t += (o - e);
   	  cnt += (o - e);
   	  o = e;
   	}
   	if(t > e) {
   	  z += (t - e);
   	  cnt += (t - e);
   	  t = e;
   	}
   	if(z == o and o == t) break;
   	//cout << z << " " << o << " " << t <<" " << cnt << endl;
   }
   cout << cnt << "\n";
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