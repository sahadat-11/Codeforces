//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) cin >> b[i];
   vector<pair<int,int >> v;
   for(int i = 0; i < n; i++) {
   	 v.push_back({a[i], b[i]});
   }
   sort(v.begin(), v.end());
   for(int i = 0; i < n; i++) {
   	 cout << v[i].first << " ";
   }
   cout << "\n";
   for(int i = 0; i < n; i++) {
   	 cout << v[i].second << " ";
   }
   cout << "\n";
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