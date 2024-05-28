//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n + 1], b[n + 1];
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
     b[i] = a[i];
   }
   sort(b + 1, b + 1 + n);
   ll pre_sum1[n + 1] = {0}, pre_sum2[n + 1] = {0};
   for(int i = 1; i <= n; i++) {
     pre_sum1[i] = pre_sum1[i - 1] + a[i];
   }
   for(int i = 1; i <= n; i++) {
     pre_sum2[i] = pre_sum2[i - 1] + b[i];
   }
   int q; cin >> q;
   while(q--) {
     int tp, l, r; cin >> tp >> l >> r;
     if(tp == 1) {
       cout << pre_sum1[r] - pre_sum1[l - 1] << "\n";
     }
     else {
       cout << pre_sum2[r] - pre_sum2[l - 1] << "\n";
     }
   }
   return 0;
}