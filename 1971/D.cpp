//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string a; cin >> a;
   string b = a;
   sort(b.begin(), b.end());
   if(a == b) cout << "1\n";
   else {
   	int cnt = 0, f = 0, one = 0;
   	//if(a[0] == '1') cnt = 1;
   	for(int i = 1; i < (int)a.size(); i++) {
   	  //if(a[i] != a[i - 1]) cnt++;
   	  if(a[i] == '1' and a[i - 1] == '0' and f == 0) f = 1;
   	  else if(a[i] != a[i - 1] and !one) {
   	  	cnt += 2;
   	  	one = 1;
   	  }
   	  else if(a[i] != a[i - 1] and one) cnt++;
   	}
   	cout << cnt << "\n";
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

// https://prnt.sc/iJnpN2eaCu7M