//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 int n, k; cin >> n >> k; int a[n + 1];
       vector<pair<int, int>> v;
       for(int i = 1; i <= n; i++) {
         cin >> a[i];
         a[i] = a[i] % k;
         if(a[i] == 0) a[i] = k;
         v.push_back({-a[i], i});
       }
       sort(v.begin(), v.end());
       for(auto u : v) {
         cout << u.second << " ";
       }
       cout << "\n";
   }
   return 0;
}
