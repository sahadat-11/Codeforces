//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, x; cin >> n >> x; int mn[n], mx[n];
  int mns = 0, mxs = 0;
  for(int i = 0; i < n; i++) {
    cin >> mn[i] >> mx[i];
    mns += mn[i];
    mxs += mx[i];
  }
  if(x > mxs or x < mns) cout << "NO\n";
  else {
    cout << "YES\n";
    for(int i = 0; i < n; i++) {
      cout << min(mx[i], x - mns + mn[i]) << " ";
      x -= min(mx[i], x - mns + mn[i]);
      mns -= mn[i];
    }
  }
  return 0;
}
