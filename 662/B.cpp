//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n), v1(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   v1 = v;
   sort(v1.rbegin(), v1.rend());
   int cnt = 0;
   for(int i = 1; i < n; i += 2) {
   	 v[i] = v1[cnt++];
   }
   for(int i = 0; i < n; i += 2) {
   	 v[i] = v1[cnt++];
   }
   for(int i = 0; i < n; i++) cout << v[i] << " ";
   cout << "\n";
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