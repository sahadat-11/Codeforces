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


#include<bits/stdc++.h>
using namespace std;
const int N = 105;
int c[N],r[N];
string s[N];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i][j] == 'C') r[i]++,c[j]++;
        }
    }
    for(int i = 0; i < n; i++){
        ans+=(c[i]-1)*c[i]/2;
        ans+=(r[i]-1)*r[i]/2;
    }
    cout << ans << '\n';
}