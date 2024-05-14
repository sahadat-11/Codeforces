//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   int even = 0;
   for(int i = 0; i < n; i++)  {
   	cin >> v[i];
   	if(v[i] % 2 == 0) even++;
   }

   int mn = INT_MAX;
   for(int i = 0; i < n; i++) {

   	mn = min(mn, (k - (v[i] % k)) % k);
   }
     if(k == 4 ){
   		if(even>=2) mn=0;
   		else if (even==1) mn= min(mn , 1LL);
   		else {
   				mn = min(mn , 2LL);
   		}
   	}
   cout << mn << "\n";
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