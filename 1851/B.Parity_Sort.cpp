//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n], b[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      b[i] = a[i];
    }
    sort(b, b + n);
    bool flag = true;
    for(int i = 0; i < n; i++) {
      if(a[i] % 2 != b[i] % 2) flag = false;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t; cin >> t;
//   while(t--) {
//     int n; cin >> n; int a[n];
//     for(int i = 0; i < n; i++) cin >> a[i];
//     for(int i = 0; i < n; i++) {
//       for(int j = i+1; j < n; j++) {
//         if(a[i] % 2 == a[j] % 2 and a[i] > a[j]) swap(a[i], a[j]);
//       }
//     }
//     for(int i = 0; i < n; i++) cout << a[i] << " ";
//   }
//   return 0;
// }
