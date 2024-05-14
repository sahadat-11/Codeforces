// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; string s; cin >> n >> s;
//    for(int i = 0; i < n; i++) {
//    	for(int j = n - 1; j > i; j--) {
//    	  if(s[i] > s[j]) {
//    	  	cout << "YES\n";
//    	  	cout << i + 1 << " " << j + 1 << "\n";
//    	  	return;
//    	  }
//    	}
//    }
//    cout << "NO\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }
// // O(n * n)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   for(int i = 1; i < n; i++) {
   	if(s[i] < s[i - 1]) {
   	  cout << "YES\n";
   	  cout << i << " " << i + 1 << "\n";
   	  return;
   	}
   }
   cout << "NO\n";
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