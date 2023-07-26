//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; 
      for(int i = 1; i <= n; i++) {
         for(int j = 1; j <= i; j++) {
            if(j > 1 and j < i) cout << 0 << " ";
            else cout << 1 << " ";
         }
         cout << "\n";
      }
    }
    return 0;
}
