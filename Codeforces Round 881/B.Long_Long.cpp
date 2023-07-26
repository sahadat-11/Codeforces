//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int x = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++) sum +=  abs(a[i]);
    for(int i = 0; i < n; ) {
      if(a[i] < 0) {
        while(a[i] <= 0) {
          i++;
        }
        x++;
      }
      else i++;
    }
    cout << sum << " " << x << "\n";
  }
  return 0;
}


// approach 2:

#include<bits/stdc++.h>
using namespace std;
long long x, ans, cnt, cur, t, n;
void sol() {
  cin >> n;
  ans = cur = cnt = 0;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    ans += abs(x);
    if (x < 0) cnt++;
    else if (x > 0) {
      if (cnt) cur++;
      cnt = 0;
    }
  }
  if (cnt) cur++; // last negative er por jodi possitive na takhe;
  cout << ans << ' ' << cur << '\n';
}
int main() {
  cin >> t;
  while (t--) sol();
  return 0;
}