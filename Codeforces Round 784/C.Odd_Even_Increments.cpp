//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve() {
   int n; cin >> n; int a[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n - 2; i++) {
      if(a[i] % 2 != a[i + 2] % 2) return false;
    }
    return true;
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
