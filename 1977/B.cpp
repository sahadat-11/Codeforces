//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int x; cin >> x;
   vector<int> v(35, 0);
   int sz = log2(x - 1);

   int xx = 0;
   for(int i = sz; i >= 0; i -= 2) {
   	int yy = (1ll << i);
    if(xx < x) {
      v[i] = 1;
      xx += yy;
    }
   }

   //cout << xx << "\n";
   if(xx >= x) {
   	xx -= x;
   }

   for(int i = sz - 1; i >= 0; i--) {
     int yy = (1ll << i);
   	 if(xx >= yy and v[i + 1] == 0) {
   	  v[i] = -1;
   	  xx -= yy;
   	}
   }

   cout << 32 << "\n";
   for(int i = 0; i < 32; i++) {
   	cout << v[i] << " ";
   }
   cout << "\n";
   
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