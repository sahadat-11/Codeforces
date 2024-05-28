//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   string s;
   for(int i = 0; i < k; i++) {
   	 s.push_back(char(i + 'a'));
   }
   for(int i = 0; i < n; i++) cout << s;
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