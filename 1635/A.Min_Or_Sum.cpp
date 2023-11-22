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
    for(int i = 0; i < n; i++) {
      x |= a[i];
    }
    cout << x << "\n";
  }

  return 0;
}
//https://prnt.sc/Kn9kCAmk3g2_