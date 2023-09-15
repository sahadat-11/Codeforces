//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, cs = 0; cin >> t;
   while(t--) {
      int n; cin >> n;
      for(int i = 1; i <= n; i += 2) {
         for(int j = i; j <= n; j *= 2) {
            cout << j << " ";
         }
      } 
      cout << "\n";
   }
   return 0;
}

// https://prnt.sc/0iuRTMGrths8