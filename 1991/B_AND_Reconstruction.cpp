//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1), b(n + 1);
   for(int i = 1; i < n; i++) {
     cin >> b[i];
   }
   b[0] = 0, b[n] = 0;
   for(int i = 1; i <= n; i++) {
    a[i] = (b[i] | b[i - 1]);
   }
   bool flag = true;
   for(int i = 1; i < n; i++) {
    if((a[i] & a[i + 1]) != b[i]) {
      flag = false;
    }
   }
   if(flag) {
   	for(int i = 1; i <= n; i++) {
   		cout << a[i] << " ";
   	}
   }
   else {
   	cout << "-1";
   }
   cout << "\n";
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