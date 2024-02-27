// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n, k; cin >> n >> k;
//    vector<int> a(k), b(k), ans(n);
//    for(int i = 0; i < k; i++) cin >> a[i];
//    for(int i = 0; i < k; i++) cin >> b[i];
//    for(int i = 0; i < n; i++) {
//    	 int mn = INT_MAX;
//      for(int j = 0; j < k; j++) {
//        int x = b[j] + abs(a[j] - i - 1);
//        mn = min(mn, x);
//      }
//      ans[i] = mn;
//    }
//    for(auto u : ans) cout << u << " "; cout << "\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int INF = 1e18;
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(k + 1), b(k + 1);
   for(int i = 1; i <= k; i++) cin >> a[i];
   for(int i = 1; i <= k; i++) cin >> b[i];
   vector<int> left(n + 2, INF), right(n + 2, INF);
   for(int i = 1; i <= k; i++) {
   	left[a[i]] = right[a[i]] = b[i];
   }
   for(int i = 1; i <= n; i++) {
   	left[i] = min(left[i - 1] + 1, left[i]);
   }
    for(int i = n; i >= 1; i--) {
   	right[i] = min(right[i + 1] + 1, right[i]);
   }
   for(int i = 1; i <= n; i++) {
   	//cout << left[i] << " " << right[i] << endl;
   	cout << min(left[i], right[i]) << " ";
   }
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e18 + 7;
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(k), b(k);
   for(int i = 0; i < k; i++) cin >> a[i];
   for(int i = 0; i < k; i++) cin >> b[i];
   vector<int> left(n, N), right(n, N);
   for(int i = 0; i < k; i++) {
   	left[a[i] - 1] = right[a[i] - 1] = b[i];
   }
   int pre = N;
   for(int i = 0; i < n; i++) {
   	left[i] = min(left[i], pre + 1);
   	pre = left[i];
   }
   pre = N;
   for(int i = n - 1; i >= 0; i--) {
	right[i] = min(right[i], pre + 1);
	pre = right[i];
   }
   for(int i = 0; i < n; i++) {
   	//cout << left[i] << " " << right[i] << endl;
   	cout << min(left[i], right[i]) << " ";
   }
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}