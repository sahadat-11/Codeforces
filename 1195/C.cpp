// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7, mod = 1e9 + 7;
// #define int long long
// int n; 
// int a[N], b[N], dp[N][2];

// int func(int i, int last) {
// 	if(i == n + 1) return 0;
// 	int ans = 0;
//     if(dp[i][last] != -1) return dp[i][last];
// 	ans = max(ans, func(i + 1, 0));
// 	ans = max(ans, func(i + 1, 1));

// 	if(last == 0) {
// 		ans = max(ans, a[i] + func(i + 1, 1));
// 	}
// 	if(last == 1) {
// 		ans = max(ans, b[i] + func(i + 1, 0));
// 	}
// 	//cout << ans << "\n";
// 	return dp[i][last] = ans;

// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> n;
//   for(int i = 1; i <= n; i++) {
//     cin >> a[i];
//   }
//   for(int i = 1; i <= n; i++) {
//     cin >> b[i];
//   }
//   memset(dp, -1, sizeof dp);
//   int x = func(1, 0); // start a
//   int y = func(1, 1); // start b
//   cout << max(x, y);
//   return 0;
// }


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7, mod = 1e9 + 7;
// #define int long long
// int n; 
// int a[N], b[N], dp[N][2];

// int func(int i, int last) {
// 	if(i == 0) return 0;
// 	int ans = 0;
//     if(dp[i][last] != -1) return dp[i][last];
// 	ans = max(ans, func(i - 1, 0));
// 	ans = max(ans, func(i - 1, 1));

// 	if(last == 0) {
// 		ans = max(ans, a[i] + func(i - 1, 1));
// 	}
// 	if(last == 1) {
// 		ans = max(ans, b[i] + func(i - 1, 0));
// 	}
// 	//cout << ans << "\n";
// 	return dp[i][last] = ans;

// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> n;
//   for(int i = 1; i <= n; i++) {
//     cin >> a[i];
//   }
//   for(int i = 1; i <= n; i++) {
//     cin >> b[i];
//   }
//   memset(dp, -1, sizeof dp);
//   int x = func(n, 0);
//   int y = func(n, 1);
//   cout << max(x, y);
//   return 0;
// }


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int n; 
int a[N], b[N], dp[N][2];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for(int i = 1; i <= n; i++) {
    cin >> b[i];
  }
  for(int i = 1; i <= n; i++) {
  	dp[i][0] = max(dp[i - 1][1] + a[i], dp[i - 1][0]);
  	dp[i][1] = max(dp[i - 1][0] + b[i], dp[i - 1][1]);
  }
  cout << max(dp[n][0], dp[n][1]);
  return 0;
}