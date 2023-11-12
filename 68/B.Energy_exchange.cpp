//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7;
double eps = 1e-12;
int a[N];
int n, k; 
bool isvalid(double mid) {
   double need = 0, have = 0;
   for(int i = 0; i < n; i++) {
      if(a[i] > mid) have += (a[i] - mid);
      else need += (mid - a[i]);
   }
   return (have - (have * k) / 100.0) >= need;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin >> n >> k; 
   for(int i = 0; i < n; i++) {
      cin >> a[i];
   }
   double l = 0, r = 1e9, ans = 0;
   while(r - l > eps) {
      double mid = l + (r - l) / 2;
      if(isvalid(mid)) {
         l = mid;
      }
      else r = mid;
   }
   cout << fixed << setprecision(12) << l << "\n";
   return 0;
}

