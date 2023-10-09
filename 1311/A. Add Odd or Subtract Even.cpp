//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	 int a, b; cin >> a >> b;
  	 int x = a % 2, y = b % 2;
  	 int ans = 0;
  	 if(a > b) {
  	 	if(!x and !y) ans = 1;
  	 	else if(x and y) ans = 1;
  	 	else ans = 2;
  	 }
  	 else if(a < b) {
  	 	if(!x and !y) ans = 2;
  	 	else if(x and y) ans = 2;
  	 	else ans = 1;
  	 }
  	 cout << ans << "\n";
  }
  
  return 0;
}
