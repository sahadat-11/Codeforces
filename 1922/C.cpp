//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; string a, b, c;  cin >> n >> a >> b >> c;
   bool flag = true;
   for(int i = 0; i < n; i++) {
     if((c[i] == a[i] and c[i] != b[i]) or (c[i] != a[i] and c[i] == b[i])) {
       flag = false; break;
     }
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
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