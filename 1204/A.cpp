//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   if(n == 1) {
   	 cout << 0 << "\n"; return;
   }
   int bit = 0;
   for(int i = 0; i < n; i++) {
   	 if(s[i] == '1') bit++;
   }
   if(bit == 1) cout << n / 2 << "\n";
   else cout << (n + 1) / 2 << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/uvv25NprI6VX

#include "bits/stdc++.h"
using namespace std;

int main() {
    string s;cin >> s;
    int ans = 0;
    for (int i = 1; i < s.size(); i++)if (s[i] == '1')ans = 1;
    if (s.size() % 2 == 0)cout << s.size() / 2 << endl;
    else cout << s.size() / 2 + ans << endl;

    return 0;
}