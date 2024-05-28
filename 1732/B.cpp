//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   int cnt = 0;
   int pre = s[0] - '0';
   //cout << pre << endl;
   for(int i = 1; i < n; i++) {
   	int now = s[i] - '0';
   	//cout << now << endl;
   	if(cnt % 2) {
   	  if((now + cnt) % 2) now = 0;
   	  else now = 1;
   	}
   	else {
   	  if((now + cnt) % 2) now = 1;
   	  else now = 0;
   	}
   	if(now < pre) {
   	  cnt++;
   	  now = (now ^ 1);
   	} 
   	cout << pre << " " << now << "\n";
   	pre = now;
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