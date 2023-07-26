//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n + 1], b[n + 1];
    int mx = INT_MIN, mxi = 0;
    for(int i = 1; i <= n; i++) {
      cin >> a[i] >> b[i];
      if(b[i] > mx and a[i] <= 10) {
        mx = b[i];
        mxi = i;
      }
    }
    cout << mxi << "\n";
  }
}