//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b; cin >> a >> b;
   int cnt = 0;
   if(a > b) swap(a, b);
   while(a != b) {
   	if(b % 8 == 0 and b / 8 >= a) b /= 8;
   	else if(b % 4 == 0 and b / 4 >= a) b /= 4;
   	else if(b % 2 == 0 and b / 2 >= a) b /= 2;
   	else {
   	  cnt = -1; break;
   	}
   	cnt++;
   	//cout << b << endl;
   }
   cout << cnt << "\n";
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