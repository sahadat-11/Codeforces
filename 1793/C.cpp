//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
   }
   int mn = 1, mx = n;
   int l = 1, r = n;
   while(l <= r) {
   	int a = v[l], b = v[r];
   	//cout << a << " " << b << endl;
   	if((a == mn or a == mx) or (b == mn or b == mx)) {
      if(a == mn or a == mx) {
   	    if(a == mn) mn++;
   	    else mx --;
   	    l++;
   	  }
   	  if(b == mn or b == mx) {
   	    if(b == mn) mn++;
   	    else mx --;
   	    r--;
   	  }
   	}
   	else {
   	  cout << l << " " << r << "\n"; return;
   	}
   }
   cout << "-1\n";
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