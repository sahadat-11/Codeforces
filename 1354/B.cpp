//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   int ans = INT_MAX;
   int dif;
   set<char> st;
   int last1 = -1, last2 = -1, last3 = -1;
   for(int i = 0; i < n; i++) {
   	 st.insert(s[i]);
   	 if(s[i] == '1') last1 = i;
   	 if(s[i] == '2') last2 = i;
   	 if(s[i] == '3') last3 = i;
   	 //cout << last1 << last2 << last3 << endl;
   	 if(st.size() == 3) {
   	 	if(s[i] == '1') {
   	 	  dif = max(last1 - last2, last1 - last3) + 1;
   	 	  //cout << dif << ans << endl;
   	 	}
   	 	if(s[i] == '2') {
   	 	  dif = max(last2 - last1, last2 - last3) + 1;
   	 	}
   	 	if(s[i] == '3') {
   	 	  dif = max(last3 - last1, last3 - last2) + 1;
   	 	}
   	 	ans = min(ans, dif);
   	 	//cout << dif << " " << ans << "\n";
   	 }
   	//cout << ans << last1 << last2 << last3 << endl;

   }
   //for(auto [u, v] : mp) cout << u << " " << v << endl;
   if(ans == INT_MAX) ans = 0;
   cout << ans << "\n";
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