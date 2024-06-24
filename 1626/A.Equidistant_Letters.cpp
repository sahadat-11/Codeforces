//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   map<char, int> mp;
   for(auto u : s) mp[u]++;
   for(auto u : mp) {
   	 if(u.second == 2) cout << u.first;
   }
   for(auto u : mp) {
   	 if(u.second == 2) cout << u.first;
   }
   for(auto u : mp) {
   	 if(u.second == 1) cout << u.first;
   }
   cout << "\n";
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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   sort(s.begin(), s.end());
   cout << s << "\n";
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


