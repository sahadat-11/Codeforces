//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int cnt[26];
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   string s;
   for(int i = 0; i < n; i++) cin >> v[i];
   for(int i = 0; i < n; i++) {
   	 for(int j = 0; j < 26; j++) {
   	 	if(v[i] == cnt[j]) {
   	 	  cnt[j]++;
   	 	  s.push_back(char(j + 'a')); break;
   	 	}
   	 }
   }
   cout << s << "\n";
   for(int i = 0; i < 26; i++) cnt[i] = 0;
   
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