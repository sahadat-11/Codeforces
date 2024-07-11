//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 7;
int divs[N];
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) {
     for(int j = i; j < N; j += i) {
       divs[j] += i;
     }
   }
   int t; cin >> t;
   while(t--) {
    int n; cin >> n;
    int x = divs[n] - n;
    if(x > n) cout << "abundant\n";
    else if(x < n) cout << "deficient\n";
    else cout << "perfect\n";
   }
}
