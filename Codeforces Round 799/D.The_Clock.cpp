//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    string s; cin >> s; int n; cin >> n;
    string h = s.substr(0, 2);
    string m = s.substr(3, 2);
    //cout << h << " " << m << "\n";
    int hh = stoi(h); int mm = stoi(m);
    int cnt = 0;
    string hhh, mmm;
    while(h != hhh or m != mmm) {
      mm += n;
      hh += (mm / 60);
      mm %= 60;
      hh %= 24;
      hhh = to_string(hh);
      mmm = to_string(mm);
      if(hh <= 9) hhh = '0' + hhh;
      if(mm <= 9) mmm = '0' + mmm;
      if(hhh [0] == mmm[1] and hhh[1] == mmm[0]) cnt++;
      //cout << hhh << " " << mmm << endl;
    }
    cout << cnt << "\n";
  }
  // string s; cin >> s;
  // s = '0' + s;
  // cout << s << endl;
  return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
char c; int a, b, m, s, s1, x;
int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> a >> c >> b >> x;
    s = a;
    m = b;
    s1 = 0;
    do {
      m += x;
      s += m / 60;
      m %= 60;
      s %= 24;
      if (m % 10 == s / 10 && m / 10 == s % 10) {
        s1++;
      }
    } while (s != a || m != b);
    cout << s1 << endl;
  }
}

// approach 3:

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int h, t, x;
    scanf("%d:%d %d", & h, & t, & x);
    int hh = h, tt = t;
    int res = 0;
    while (1) {
      tt = tt + x;
      int k = tt / 60;
      tt = tt % 60;
      hh = (hh + k) % 24;
      int kk = hh % 10 * 10 + hh / 10;
      if (kk == tt) res++;
      if (hh == h && tt == t) break;
    }
    cout << res << '\n';
  }
}