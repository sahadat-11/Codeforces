//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int a[3];
      map<int, int> mp;
      for(int i = 0; i < 3; i++) {
         cin >> a[i];
         mp[a[i]]++;
      }
      for(int i = 0; i < 3; i++) {
         if(mp[a[i]] == 1) {
            cout << a[i] << "\n";
            continue;
         }
      }
   } 
   return 0;
}
