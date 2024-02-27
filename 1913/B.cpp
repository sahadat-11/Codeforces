//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   int one = 0, zero = 0;
   for(auto u : s) {
   	 if(u == '0') zero++;
   	 else one++;
   }
   for(auto u : s) {
   	 if(u == '1') {
   	 	if(zero > 0) zero--;
   	 	else break;
   	 }
   	 else {
   	 	if(one > 0) one--;
   	 	else break;
   	 }
   }
   cout << one + zero << "\n";
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