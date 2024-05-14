//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   vector<bool> used1(n + 1, false), used2(n + 1, false);
   int ind = -1; bool flag = false;
   for(int i = 1; i <= n; i++) {
   	if(v[i] == 0 and !flag) {
   		used1[v[i]] = true;
   		if(i != 1) flag = true;
   		int ind = i ;
   	}
   	else if(!flag) {
   	   used1[v[i]] = true;
   	}
   	else used2[v[i]] = true;
   }
   int a = -1, b = -1;
   for(int i = 0; i <= n; i++) {
   	if(!used1[i]) {
   		a = i; break;
   	}
   }
   for(int i = 0; i <= n; i++) {
   	if(!used2[i]) {
   		b = i; break;
   	}
   }
   cout << a << " " << b << endl;
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