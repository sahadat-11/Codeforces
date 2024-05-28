// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; cin >> n;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) {
//      cin >> v[i];
//    }
//    vector<int> divs;
//    for(int i = 1; i * i <= n; i++) {
//    	if(n % i == 0) {
//    	  divs.push_back(i);
//    	  if(i != n / i) {
//    	  	divs.push_back(n / i);
//    	  }
//    	}
//    }
//    sort(divs.begin(), divs.end());
//    int ans = 0;
//    for(auto k : divs) {
//    	int mx = 0, mn = 1e18;
//    	for(int i = 0; i < n; i += k) {
//    	  int sum = 0;
//    	  for(int j = i; j < i + k; j++) {
//    	  	sum += v[j];
//    	  }
//    	  mn = min(mn, sum);
//    	  mx = max(mx, sum);
//    	}
//    	ans = max(ans, mx - mn);
//    	//cout << k << " " << ans << " " << mx << " " << mn << "\n";
//    }
//    cout << ans << "\n";
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
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   vector<int> pre(n + 1, 0);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
     pre[i] = pre[i - 1] + v[i];
   }
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
     if(n % i == 0) {
       divs.push_back(i);
       if(i != n / i) {
         divs.push_back(n / i);
       }
     }
   }
   int x = divs.size(), ans = 0;
   for(int i = 0; i < x; i++) {
     int mx = 0, mn = 1e18;
     for(int j = divs[i]; j <= n; j += divs[i]) {
        mx = max(mx, pre[j] - pre[j - divs[i]]);
        mn = min(mn, pre[j] - pre[j - divs[i]]);
     }
     ans = max(ans, mx - mn);
   }
   cout << ans << "\n";
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