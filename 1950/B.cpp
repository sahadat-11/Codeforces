//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   //string a[2][2] = {"##"}
   int n; cin >> n;
   for(int i = 0; i < n; i++) {
     for(int j = 0; j < n; j++) {
     	if((i + j) % 2 == 0) {
     	  for(int a = 0; a < 2; a++) {
     	  	  cout << '#';
     	  }
     	}
     	if((i + j) % 2 != 0) {
     	  for(int a = 0; a < 2; a++) {
     	  	  cout << '.';
     	  }
     	}
     }
     cout << "\n";
     for(int j = 0; j < n; j++) {
     	if((i + j) % 2 == 0) {
     	  for(int a = 0; a < 2; a++) {
     	  	  cout << '#';
     	  }
     	}
     	if((i + j) % 2 != 0) {
     	  for(int a = 0; a < 2; a++) {
     	  	  cout << '.';
     	  }
     	}
     }
     cout << "\n";
   }
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