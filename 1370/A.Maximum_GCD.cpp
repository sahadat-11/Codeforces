// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// int sol(int n) {
// 	int gcd = 0;
// 	for(int i = 1; i < n; i++) {
// 		for(int j = i + 1; j <= n; j++) {
//           gcd = max(gcd, __gcd(i, j));
// 		}
// 	}
// 	return gcd;
// }
// void solve() {
//    for(int i = 1; i <= 20; i++) {
//    	 cout << i << " " << sol(i) << "\n";
//    }
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

// // observe that solution is (n / 2);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   cout << n / 2 << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// if (a < b) so n / 2;
// but if(a <= b) ans = n; 