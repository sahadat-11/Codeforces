//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int h, m, x; char c; cin >> h >> c >> m >> x;
   int hh = h, mm = m, hhh, mmm, cnt = 0;
   do {
     mmm = mm + x;
     hhh = (hh + mmm / 60) % 24;
     mmm %= 60;
     //cout << hhh << " " << mmm << "\n";
     int a = hhh / 10, b = hhh % 10;
     int c = mmm / 10, d = mmm % 10;
     if(a == d and b == c) cnt++;
     hh = hhh, mm = mmm;
   }while(h != hh or m != mm);
   cout << cnt << "\n";
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
