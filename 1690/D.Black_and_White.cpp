//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e9;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      int t; cin >> t;
      while(t--) {
        int n, k; string s; cin >> n >> k >> s; 
        int pre[n + 1];
        pre[0] = 0;
        for(int i = 1; i <= n; i++) {
          if(s[i - 1] == 'W') pre[i] = pre[i - 1] + 1;
          else pre[i] = pre[i - 1];
        }
        int mn = INT_MAX;
        for(int i = k; i <= n; i++) {
          mn = min(mn, pre[i] - pre[i - k]);
        }
        cout << mn << "\n";
      }
    return 0;
}