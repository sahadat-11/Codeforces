//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      int cnt = 0;
      for(int i = 0; i < n; i++) cnt += (a[i] - 1);
      if(cnt % 2) cout << "errorgorn\n";
      else cout << "maomao90\n";
   }
    return 0;
}
