//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      int t; cin >> t;
      while(t--) {
        int n; cin >> n; int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        int mx = 0;
        for(int i = 0; i < n; i++) {
          mx = max(a[i] - b[i], mx);
        }
        //cout << mx << endl;
        for(int i = 0; i < n; i++) {
          a[i] -= mx;
          if(a[i] < 0) a[i] = 0;
        }
        bool flag = true;
        for(int i = 0; i < n; i++) {
          if(a[i] != b[i]) flag = false;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
      }
    return 0;
}