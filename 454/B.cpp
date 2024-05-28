//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int cnt = 0, pos = n;
   for(int i = 1; i < n; i++) {
   	if(v[i] < v[i - 1]) {
   	  cnt++; pos = i;
   	 }
   }
   if(v[n - 1] > v[0]) cnt++;
   if(cnt > 1) cout << "-1\n";
   else cout << n - pos << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// array highest two partition possible;
// 