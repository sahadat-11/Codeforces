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
      ll sum = 0, odd = 0;
      for(int i = 0; i < n; i++) {
         sum += a[i];
         if(a[i] % 2) odd++;
         if(i == 0) cout << sum << " ";
         else {
            cout << sum - (odd / 3 + (odd % 3 == 1)) << " ";
         }
      }
      cout << "\n";
   }
   return 0;
}

// https://youtu.be/LhZRF8x5TRc?si=vXz94Qw0ORV4Ui-z