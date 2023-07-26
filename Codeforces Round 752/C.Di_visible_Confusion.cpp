//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t;
    while(t--) {
      int n; cin >> n; int a[n + 1];
      for(int i = 1; i <= n; i++) cin >> a[i];
      bool flag = true;
      for(int i = 1; i <= min(n, 21); i++) {
        bool can_erase = false;
        for(int j = 1; j <= i; j++) {
          if(a[i] % (j + 1) != 0) can_erase = true;
        }
        if(!can_erase) {
          flag = false; break;
        }
      }
      if(flag) cout << "YES\n";
      else cout << "NO\n";
    } 
  return 0;
}

