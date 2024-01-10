//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n, k; cin >> n >> k;
     int x = n / k;
     for(int i = 0; i < x; i++) {
       for(int j = 0; j < k; j++) {
         cout << char(j + 'a');
       }
     }
     for(int i = 0; i < n % k; i++) cout << char(i + 'a');
     cout << "\n";
   }
   return 0;
}