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
        string a, s, ans; cin >> a >> s;
        int n1 = a.size(), n2 = s.size();
        //int x, y;
        for(int i = n2 - 1, j = n1 - 1; i >= 0;) {
          if(s[i] < a[j]) {
            string x = s.substr(i - 1, 2);
            int p = stoi(x);
            ans += ((p - (a[j] - '0')) + '0');
            i -= 2; j--;
          }
          else {
            ans += (((s[i] - '0') - (a[j] - '0')) + '0');
            i--; j--;
            cout << ans << "\n";
          }
        }
        //cout << ans << "\n";
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
        //cout << stoi(ans) << "\n";
      }
    return 0;
}