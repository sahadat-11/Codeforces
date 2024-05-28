//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll sum = 0;
   for(int i = 1; i < n; i++) {
   	 sum += abs(v[i] - v[i - 1]);
   }
   //cout << sum << "\n";
   vector<int> ans;
   // ans.push_back(v[0]);
   // for(int i = 1; i < n - 1; i++) {
   // 	 if(v[i] > v[i - 1] and v[i] > v[i + 1]) {
   // 	 	ans.push_back(v[i]);
   // 	 }
   // 	 if(v[i] < v[i - 1] and v[i] < v[i + 1]) {
   // 	 	ans.push_back(v[i]);
   // 	 }
   // }
   // ans.push_back(v[n - 1]);
   for(int i = 0; i < n; i++) {
   	 if(i == 0 or i == n - 1 or (v[i] > v[i - 1] and v[i] > v[i + 1]) or (v[i] < v[i - 1] and v[i] < v[i + 1])) {
   	 	ans.push_back(v[i]);
   	 }
   }
   cout << ans.size() << "\n";
   for(auto u : ans) cout << u << " "; cout << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


// https://prnt.sc/qSeN0OO0qQee