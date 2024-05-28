//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   int cnt = 0;
   while(m > n) {
   	if(m % 2) m++;
   	else m /= 2;
   	cnt++;
   }
   cnt += (n - m);
   cout << cnt << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include <bits/stdc++.h>

using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main() {
      sahadat();
      ll n, m; cin >> n >> m;
      ll cnt = 0;
      while(n != m) {
        cnt ++;
        if(n > m || m % 2 != 0) m++;
        else m /= 2;
      }

      cout << cnt << "\n";
  return 0;

} 