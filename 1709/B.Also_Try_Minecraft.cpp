// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int n, q; cin >> n >> q; int a[n + 1];
//    for(int i = 1; i <= n; i++) cin >> a[i];
//    int dif1[n] = {0}, dif2[n] = {0};
//    for(int i = 1; i < n; i++) {
//       if(a[i] > a[i + 1]) dif1[i] = a[i] - a[i + 1];
//       else dif1[i] = 0;
//    }
//    for(int i = 1; i < n; i++) {
//       if(a[i] < a[i + 1]) dif2[i] = abs(a[i] - a[i + 1]);
//       else dif2[i] = 0;
//    }
//    // for(int i = 1; i < n; i++) {
//    //    cout << dif1[i] << " " << dif2[i] << endl;
//    // }
//    ll pre[n + 1] = {0ll}, suf[n + 1] = {0ll};
//    for(int i = 1; i < n; i++) {
//      pre[i] = pre[i - 1] + dif1[i];
//    }
//    for(int i = n - 1; i >= 1; i--) {
//      suf[i] = suf[i + 1] + dif2[i];
//    }
//    // for(int i = 1; i < n; i++) {
//    //   cout << pre[i] << " ";
//    // }
//    // cout << "\n";
//    // for(int i = 1; i < n; i++) {
//    //   cout << suf[i] << " ";
//    // }
//    while(q--) {
//      int l, r; cin >> l >> r;
//      if(r > l) {
//        r--;
//        cout << pre[r] - pre[l - 1] << "\n";
//      }
//      else {
//        l--;
//        cout << suf[r] - suf[l] << "\n";
//      }
//    }
//    return 0;
// }

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, q; cin >> n >> q; ll a[n];
   ll left[n] = {0ll}, right[n] = {0ll};
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 1; i < n; i++) {
      left[i] = left[i - 1] + max(0ll, a[i] - a[i - 1]);
      right[i] = right[i - 1] + max(0ll, a[i - 1] - a[i]);
   }
   while(q--) {
    int s, t;
    cin >> s >> t;
    if (s < t) {
      cout << right[t - 1] - right[s - 1] << '\n';
    }
    else {
      cout << left[s - 1] - left[t - 1] << '\n';
    }
   }
   return 0;
}
