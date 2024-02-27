// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    int n; cin >> n;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) cin >> v[i];
//    int mx = 0;
//    for(int i = 0; i < n; i++) {
//    	 for(int j = 0; j < n; j++) {
//    	 	if(v[i] != v[j]) {
//    	 		mx = max(mx, j - i);
//    	 	}
//    	 }
//    }
//    cout << mx << "\n"; 
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
// // O(n * n);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int mx = 0, fs = -1, ls = -1;
   for(int i = 1; i < n; i++) {
   	 if(v[i] != v[0]) fs = max(fs, i);
   }
   for(int i = n - 2; i >= 0; i--) {
   	 if(v[i] != v[n - 1]) ls = max(ls, n - i - 1);
   }
   cout << max(fs, ls) << "\n"; 
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int x = v[0], ans = 0;
   for(int j = n - 1; j >= 0; j--) {
   	if(x != v[j]) {
   		ans = max(ans, max(j, n - j - 1));
   	}
   }
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}