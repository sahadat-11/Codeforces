//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        map<char, int> fre;
        for(auto u : s) {
            fre[u]++;
        }
        int mxf = 1;
        for(auto u : fre) {
            mxf = max(mxf, u.second);
        }
      // cout << mxf << "\n";
      int ans = -1;
      if(mxf == 1) ans = 4;
      else if(mxf == 2) ans = 4;
      else if(mxf == 3) ans = 6;
      cout << ans << "\n";
    }
    return 0;
}

// approach 2:

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s[0] == s[3]) {
      cout << -1 << endl;
    } else if (s[0] == s[2] || s[1] == s[3]) {
      cout << 6 << endl;
    } else {
      cout << 4 << endl;
    }

  }
  return 0;
}

// approach 3:

#include<bits/stdc++.h>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    vector < int > cnt(10, 0);
    int mx = 0;
    string s;
    cin >> s;
    for (char i: s) {
      cnt[i - '0']++;
      mx = max(mx, cnt[i - '0']);
    }
    if (mx == 3) {
      cout << 6 << endl;
    } else if (mx == 4) {
      cout << -1 << endl;
    } else cout << 4 << endl;
  }
  return 0;
}