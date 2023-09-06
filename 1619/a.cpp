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
        string s; cin >> s;
        int n = s.size() + 1;
        string x, y;
        x = s.substr(0, n / 2);
        y = s.substr(n / 2, n / 2);
       // cout << x << " " << y << endl;
        if(x == y) cout << "YES\n";
        else cout << "NO\n";
      }
    return 0;
}