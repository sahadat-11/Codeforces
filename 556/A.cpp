//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
  int n; string s; cin >> n >> s;
  int one =  0, zero = 0;
  for(auto u : s) if(u == '1') one++;
  else zero++;
  cout << abs(one - zero); 
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  int one = count(s.begin(), s.end(), '1');
  int zero = count(s.begin(), s.end(), '0');
  cout << n - 2 * min(one, zero);
  return 0; 
}