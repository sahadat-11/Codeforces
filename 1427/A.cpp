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
   for(int i = 0; i < n; i++) sum += v[i];
   sort(v.begin(), v.end());
   if(!sum) cout << "NO\n";
   else {
   	 cout << "YES\n";
   	 if(sum < 0) for(int i = 0; i < n; i++) cout << v[i] << " ";
   	 else for(int i = n - 1; i >= 0; i--) cout << v[i] << " ";
   	 cout << "\n";
   }
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