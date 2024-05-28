//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
     if(n % i == 0) {
       divs.push_back(i);
       if(i != n / i) {
         divs.push_back(n / i);
       }
     }
   }
   sort(divs.begin(), divs.end());
   for(auto u : divs) {
    string pre = s.substr(0, u);
    string suf = s.substr(n - u, u);
    string prefix = "", suffix = "";
    //cout << prefix << " " << suffix << endl;
    for(int i = 0; i < n / u; i++) {
      prefix += pre;
    }
    for(int i = 0; i < n / u; i++) {
      suffix += suf;
    }
    //cout << prefix << " " << suffix << endl;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] != prefix[i]) cnt1++;
    }
    for(int i = 0; i < n; i++) {
      if(s[i] != suffix[i]) cnt2++;
    }
    if(cnt1 <= 1 or cnt2 <= 1) {
      cout << u << "\n"; return;
    }
   }
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