//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7;
int a[N];
int n, k; 
bool isvalid(ll mid) {
   ll operation = 0;
   for(int i = n / 2; i < n; i++) {
      if(a[i] < mid) {// all element become to equal to mid;
         operation += (mid - a[i]);
      }
   }
   return operation <= k;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin >> n >> k; 
   for(int i = 0; i < n; i++) {
      cin >> a[i];
   }
   sort(a, a + n);
   ll l = 1, r = 2e9, ans = 0;
   while(l <= r) {
      ll mid = l + (r - l) / 2;
      if(isvalid(mid)) {
         ans = mid;
         l = mid + 1;
      }
      else r = mid - 1;
   }
   cout << ans << "\n";
   return 0;
}

