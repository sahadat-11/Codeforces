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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  int one = count(s.begin(), s.end(), '1');
  if(one == 0) cout << "0";
  else if(one == 1 and (n - 1) % 2 == 0) cout << (n - 1) / 2;
  else cout << (n - 1) / 2 + 1;
  return 0;
}