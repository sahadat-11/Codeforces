//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      int n; string s; cin >> n >> s;
      int cnt = 0, ans = 0;
      for(int i = 0; i < n; i++) {
        if(s[i] == 'x') {
          cnt++;
          if(cnt >=3) {
            ans++;
          }
        }
        else cnt = 0;
      }
      cout << ans << endl;
    return 0;
} 
