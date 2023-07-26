//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    bool flag = true;
    for(int i = 1; i < m; i++) {
      if(b[i] != a[n - m + i]) flag = false;
    }
    int cntone = count(a.begin(), a.begin() + n - m + 1, '1');
    int cntzero = count(a.begin(), a.begin() + n - m + 1, '0');
    //cout << cntone << " " << cntzero << endl;
    char c = b[0];
    if(c = '1') {
      if(cntone == 0) flag = false;
    }
    if(c = '0') {
      if(cntzero == 0) flag = false;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
