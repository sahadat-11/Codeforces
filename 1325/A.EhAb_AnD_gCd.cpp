// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void sol(int x) {
//    for(int i = 1; i <= x; i++) {
//    	 for(int j = i; j <= x; j++) {
//    	 	int gcd = __gcd(i, j);
//    	 	int lcm = i / gcd * j;
//    	 	if(gcd + lcm == x) {
//    	 	  cout << i << " " << j << "\n";
//    	 	}
//    	 }
//    }
// }
// void solve() {
//    for(int x = 2; x <= 20; x++) {
//      cout << x << " ";
//      sol(x);
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

// we observe that (1, x - 1) er (gcd(1, x - 1)) = 1, (lcm(1, x - 1)) = x - 1
// 1 + x - 1  == x;
// so ans = 1, x - 1;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int x; cin >> x;
   cout << 1 << " " << x - 1 << "\n";
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