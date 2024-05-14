//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; char c; string s; cin >> n >> c >> s;
   s += s;
   //cout << s << endl;
   int mx = 0, ind; bool flag1 = false, flag2 = false;
   for(int i = 0; i < 2 * n; i++) {
   	if(s[i] == c and !flag1) {
   	  ind = i; flag1 = true;
   	  flag2 = false;
   	}
   	if(s[i] == 'g' and !flag2) {
   	  mx = max(mx, i - ind);
   	  flag1 = false; flag2 = true;
   	}
   }
   cout << mx << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


#include<bits/stdc++.h>

using namespace std;
int main() {

  int t;
  cin >> t;
  while (t--) {
    int m;
    char c;
    cin >> m >> c;
    string s;
    cin >> s;
    int k = -1, ans = INT_MIN;
    s = s + s;
    for (int i = s.length(); i >= 0; i--) {
      if (s[i] == 'g') {
        k = i;
      }
      if (s[i] == c) {
        ans = max(ans, k - i);
      }
    }
    cout << ans << endl;
  }
}