// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    string a, b; cin >> a >> b;
//    int n1 = a.size(), n2 = b.size();
//    int ans = 0;
//    for(int i = 0; i < n1; i++) {
//    	string substr1;
//    	for(int j = i; j < n1; j++) {
//    	  substr1.push_back(a[j]);
//    	  //cout << substr << "\n";
//    	  for(int x = 0; x < n2; x++) {
//    	  	string substr2;
//    	  	for(int y = x; y < n2; y++) {
//    	  	  substr2.push_back(b[y]);
//    	  	  if(substr1 == substr2) {
//    	  	  	ans = max(ans, (int)substr1.size());
//    	  	  	//cout << substr1 <<" " << substr2 << endl;
//    	  	  }
//    	  	}
//    	  }
//    	}
//    }
//   cout << (n1 + n2) - 2 * ans << "\n";
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

// O(n^4)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string a, b; cin >> a >> b;
   int n1 = a.size(), n2 = b.size();
   int ans = 0;
   for(int i = 0; i < n1; i++) {
   	string substr1;
   	for(int j = i; j < n1; j++) {
   	  substr1.push_back(a[j]);
   	  if(b.find(substr1) != -1) {
   	  	ans = max(ans, (int)substr1.size());
   	  }
   	}
   }
  cout << (n1 + n2) - 2 * ans << "\n";
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

// O(n^2)