// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7, mod = 1e9 + 7;
// #define int unsigned long long
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int a, b, n; cin >> a >> b >> n;
//   int l = 1, h = 1e16, ans = 0;
//   while(l <= h) {
//     int mid = l + (h - l) / 2;
//     int x = mid / a;
//     int y = mid / b;
//     if(x >= n or y >= n) {
//         ans = mid;
//         h = mid - 1;
//     }
//     else if(x * y >= n) {
//       ans = mid;
//       h = mid - 1;
//     }
//     else {
//       l = mid + 1;
//     }
//   }
//   cout << ans << "\n";
//   return 0;
// }


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
bool isValid(int a, int b, int n, int h) {
   int x = h / a;
   int y = h / b;
   return x * y >= n;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, n; cin >> a >> b >> n;
  int l = 0, h = 1, ans = 0;
  while(!isValid(a, b, n, h)) {
    h *= 2;
  }
  while(l <= h) {
    int mid = l + (h - l) / 2;
    int x = mid / a;
    int y = mid / b;
    if(x * y >= n) {
      ans = mid;
      h = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  cout << ans << "\n";
  return 0;
}