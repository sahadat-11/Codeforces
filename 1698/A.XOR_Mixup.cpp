//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
       int n; cin >> n; int a[n];
       for(int i = 0; i < n; i++) cin >> a[i];
       int XOR = 0;
       for(int i = 0; i < n; i++) {
          XOR ^= a[i];
       }
       for(int i = 0; i < n; i++) {
         if((XOR ^ a[i]) == a[i]) {
            cout << a[i] << "\n";
            return;
         }
      } 
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      solve();
   } 
   return 0;
}