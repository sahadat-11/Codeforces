// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 7, mod = 1e9 + 7;
// #define int long long
// int f[N], invf[N];

// int binexp(int a, int b) {
//   int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
//   while(b) {
//     if(b & 1) {
//       ans = (ans * 1ll * a) % mod;
//     }
//     a = (a * 1ll * a) % mod;
//     b >>= 1;
//   }
//   return ans;
// }

// int nCr(int n, int r) {
//   if (n < r or n < 0) return 0;
//   return 1ll * f[n] * invf[r] % mod * invf[n - r] % mod;
// }

// int nPr(int n, int r) {
//   if (n < r or n < 0) return 0;
//   return 1ll * f[n] * invf[n - r] % mod;
// }

// void precal() {
//   f[0] = 1;
//   for (int i = 1; i < N; i++) {
//     f[i] = 1ll * i * f[i - 1] % mod;
//   }
//   invf[N - 1] = binexp(f[N - 1], mod - 2);
//   for (int i = N - 2; i >= 0; i--) {
//     invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
//   }
// }
// void solve() {
//   int n, m; cin >> n >> m;
//   cout << nCr(n + 2 * m - 1, 2 * m) << "\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   precal();

//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

// // https://prnt.sc/v4kfh_8E8Dmj
// // https://prnt.sc/pP2X0qwAiKlp

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1005, M = 25, mod = 1e9 + 7;
#define int long long
int dp[M][N];
int n, m;

int func(int i, int x) {
  if(i == 2 * m + 1) {
    return 1;
  }
  int &ans = dp[i][x];
  if(ans != -1) return ans;
  ans = 0;
  for(int j = x; j <= n; j++) {
    ans += func(i + 1, j);
    ans %= mod;
  }
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  memset(dp, -1, sizeof dp);
  cout << func(1, 1);
  return 0;
}


// #include  <bits/stdc++.h>

// using namespace std;
// long long dp[200][2000], mod = 1e9 + 7;

// int main() {
//   int n, m;
//   cin >> n >> m;
//   m *= 2;

//   for(int i = 1; i <= n; i++)
//     dp[1][i] = 1 + dp[1][i - 1];

//   for(int i = 2; i <= m; i++) {
//     for(int j = 1; j <= n; j++) {
//       dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
//     }
//   }
  
//   cout << dp[m][n];
// }