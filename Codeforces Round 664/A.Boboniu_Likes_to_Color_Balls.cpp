//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool solve() {
    int r, g, b, w; cin >> r >> g >> b >> w;
    int oddcnt = 0;
    if(r % 2) oddcnt++;
    if(g % 2) oddcnt++;
    if(b % 2) oddcnt++;
    if(w % 2) oddcnt++;
    //cout << oddcnt << endl;
    int evencnt = 4 - oddcnt;
    if(oddcnt <= 1 or (evencnt <= 1 and r > 0 and g > 0 and b > 0 )) return true;
    return false;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        if(solve()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
} 

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int  main() {
  int t;
  cin >> t;
  while (t--) { 
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int minn = min(a, min(b, c));
    int cnt = 0;
    if (a & 1) cnt++;
    if (b & 1) cnt++;
    if (c & 1) cnt++;
    if (d & 1) cnt++;
    if (cnt <= 1) puts("YES");
    else if (minn == 0) puts("NO");
    else {
      if (cnt == 2) puts("NO");
      else puts("YES");
    }
  }
}