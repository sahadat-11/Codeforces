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
        int n; cin >> n; int a[n];
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++) {
          cin >> a[i];
          if(a[i] % 2) odd++;
          else even++;
        }
        sort(a, a + n);
        if(odd == n or even == n or a[0] % 2) cout << "YES\n";
        else cout << "NO\n";
      }
    return 0;
}