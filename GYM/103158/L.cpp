// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    string s; cin >> s;
//    int n = s.size();
//    int mx = 0, ls = -1, rs = -1;
//    for(int i = 1; i < n; i++) {
//    	 if(s[0] != s[i]) ls = max(ls, i);
//    }
//    for(int i = n - 2; i >= 0; i--) {
//    	 if(s[n - 1] != s[i]) rs = max(rs, n - i - 1);
//    }
//    cout << max(ls, rs) << "\n";
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   freopen("max-pair.in", "r", stdin);
//   // freopen("sum.out", "w", stdout);
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
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll cnt = 0;
   for(int i = 1; i < n; i++) {
   	ll x = v[i] + v[i - 1];
   	if(x > k) cnt += (x - k);
   	//else cnt += 
   	v[i] = max(0ll, v[i] - (x - k + 1));
   	cout << cnt << "\n";
   }
   cout << cnt << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}