// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int binarysearch(int a[], int n, int x) {
//    int l = 0, r = n - 1;
//    int ans = 0;
//    while(l <= r) {
//       int m = l + (r - l) / 2;
//       if(a[m] < x) {
//         ans = m + 1;
//         l = m + 1;
//       }
//       else {
//          r = m - 1;
//       }
//    }
//    return ans;
// }
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int n, k; cin >> n >> k; int a[n];
//    for(int i = 0; i < n; i++) cin >> a[i];
//    sort(a, a + n);
//    while(k--) {
//       int x; cin >> x;
//       int lb = binarysearch(a, n, x);
//       cout << lb + 1<< "\n";
//    }
//    return 0;
// }

//lower bound

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, k; cin >> n >> k; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < k; i++) {
     int value; cin >> value;
     cout << lower_bound(a, a + n, value) - a + 1 << "\n";
   }
    return 0;
}