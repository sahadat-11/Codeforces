//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(2 * n);
   vector<int> cnt1(n + 1, 0);
   for(int i = 0; i < n; i++) {
   	cin >> v[i];
   	cnt1[v[i]]++;
   } 
   int l = 2 * k;
   for(int i = 1; i <= n and l > 1; i++) {
   	if(cnt1[i] == 2) {
   	  cout << i << " " << i << " ";
   	  l -= 2;
   	}
   }
   for(int i = 1; l > 0; i++) {
   	if(cnt1[i] == 1) {
   	  cout << i << " ";
   	  l--;
   	}
   }
   cout << '\n';

   vector<int> cnt2(n + 1, 0);
   for(int i = n; i < 2 * n; i++) {
   	cin >> v[i];
   	cnt2[v[i]]++;
   } 
   l = 2 * k;
   for(int i = 1; i <= n and l > 1; i++) {
   	if(cnt2[i] == 2) {
   	  cout << i << " " << i << " ";
   	  l -= 2;
   	}
   }
   for(int i = 1; l > 0; i++) {
   	if(cnt2[i] == 1) {
   	  cout << i << " ";
   	  l--;
   	}
   }
   cout << '\n';
   
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