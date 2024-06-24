//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; string s[n];
   for(int i = 0; i < n; i++) cin >> s[i];
   vector<int> row, col;
   for(int i = 0; i < n; i++) {
   	 int cnt = 0;
   	 for(int j = 0; j < n; j++) {
       if(s[i][j] == 'C') cnt++;
   	 }
   	 row.push_back(cnt);
   }
   for(int j = 0; j < n; j++) {
   	 int cnt = 0;
   	 for(int i = 0; i < n; i++) {
       if(s[i][j] == 'C') cnt++;
   	 }
   	 col.push_back(cnt);
   }
   //for(auto u : row) cout << u << " "; cout << "\n";
   //for(auto u : col) cout << u << " "; cout << "\n";
   ll ans = 0;
   for(auto u : row) {
   	 ans += (u * (u - 1) / 2); // (nc2 = (n * (n - 1) / 2));
   }
   for(auto u : col) {
   	 ans += (u * (u - 1) / 2); // (nc2 = (n * (n - 1) / 2));
   }
   cout << ans << "\n";
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
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; string s[n];
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int sum = 0;
  for(int i = 0; i < n; i++) {
    int cnt1 = 0, cnt2 = 0;
    for(int j = 0; j < n; j++) {
      if(s[i][j] == 'C') cnt1++;
      if(s[j][i] == 'C') cnt2++;
    }
    sum += (cnt1 * (cnt1 - 1) / 2);
    sum += (cnt2 * (cnt2 - 1) / 2);
    //cout << cnt1 << " " << cnt2 << "\n";
  }
  cout << sum << "\n";
  return 0;
}