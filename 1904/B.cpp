// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; cin >> n;
//    vector<int> v(n);
//    vector<pair<int, int>> vv;
//    for(int i = 0; i < n; i++) {
//      cin >> v[i];
//      vv.push_back({v[i], i});
//    }
//    sort(vv.begin(), vv.end());
//    // for(int i = 0; i < n; i++) {
//    //  cout << vv[i].first << " " << vv[i].second << "\n"; 
//    // }
//    for(int i = 0; i < n; i++) {
//    	int x = v[i], cnt = 0;
//    	for(int j = 0; j < n; j++) {
//    	  if(vv[j].second == i) continue;
//    	  if(vv[j].first <= x) {
//    	  	 x += vv[j].first;
//    	  	 cnt++;
//    	  }
//    	  else break;
//    	}
//    	cout << cnt << " ";
//    }
//    cout << "\n";
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

// // O(N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n), pre_sum(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     b[i] = a[i];
   }
   sort(b.begin(), b.end());
   pre_sum[0] = b[0];
   for(int i = 1; i < n; i++) {
   	pre_sum[i] = pre_sum[i - 1] + b[i];
   }
   map<int, int> mp;
   mp[b[n - 1]] = n - 1;
   for(int i = n - 2; i >= 0; i--) {
   	if(pre_sum[i] >= b[i + 1]) mp[b[i]] = mp[b[i + 1]];
   	else mp[b[i]] = i;
   }
   for(int i = 0; i < n; i++) cout << mp[a[i]] << " ";
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