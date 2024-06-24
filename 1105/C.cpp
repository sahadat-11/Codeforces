// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 2e5 + 7, mod = 1e9 + 7;
// #define int long long
// int dp[N][3];
// int n, l, r;

// int func(int i, int sum) {
//   if(i == n + 1) {
//   	return sum == 0;
//   }
//   int ans = 0;
//   for(int j = l; j <= r; j++) {
//   	ans += func(i + 1, (sum + j) % 3);
//   }
//   return ans;
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> n >> l >> r;
//   cout << func(1, 0);
//   return 0;
// }
// // (N * 3 * R); 


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][3];
int n, l, r;

int count(int x, int k) {
  if(k == 0) {
  	return x / 3;
  }
  if(k == 1) {
  	return x / 3 + (x % 3 >= 1);
  }
  if(k == 2) {
  	return x / 3 + (x % 3 >= 2);
  }
}

int func(int i, int sum) {
  if(i == n + 1) {
  	return sum == 0;
  }
  int &ans = dp[i][sum];
  if(ans != -1) return ans;
  // for(int j = l; j <= r; j++) {
  // 	ans += func(i + 1, (sum + j) % 3);
  // }
  ans = 0;
  for(int k = 0; k < 3; k++) {
  	ans += func(i + 1, (sum + k) % 3) * (count(r, k) - count(l - 1, k));
  	ans %= mod;
  }
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> l >> r;
  memset(dp, - 1, sizeof dp);
  cout << func(1, 0);
  return 0;
}
// (N * 3); 