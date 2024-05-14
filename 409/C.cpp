//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; int a, b; cin >> s >> a >> b;
   int n = s.size();
   vector<int> cnt(n + 1, 0);
   int rem = 0;
   for(int i = 0; i < n; i++) {
   	rem = (rem * 10 + (s[i] - '0')) % a;
   	if(rem == 0) cnt[i + 1]++;
   }
   rem = 0;
   int mul = 1;
   for(int i = n - 1; i >= 0; i--) {
   	rem = (rem + mul * (s[i] - '0')) % b;
   	if(rem == 0 and s[i] != '0') cnt[i]++;
   	mul = (mul * 10) % b;
   }
   bool f = false, flag = false;
   for(int i = 0; i < n; i++) {
   	if(cnt[i] == 2) flag = true;
   }
   if(flag) {
   	 cout << "YES\n";
     for(int i = 0; i < n; i++) {
   	   if(cnt[i] == 2 and !f) {
   	   cout << "\n";
   	   f = true;
   	  }
   	  cout << s[i];
     }
   }
   else {
   	cout << "NO";
   }
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