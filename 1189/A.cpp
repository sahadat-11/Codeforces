//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; string s; cin >> n >> s;
   if(n % 2) {
   	 cout << 1 << "\n";
   	 cout << s << "\n";
   }
   else {
   	 int one = 0, zero = 0;
   	 for(auto u : s) {
   	 	if(u == '1') one++;
   	 	else zero++;
   	 } 
     if(one != zero) {
     	cout << 1 << "\n";
   	    cout << s << "\n";
     }
     else {
     	cout << 2 << "\n";
     	int x = n / 2;
     	if(x % 2) cout << s.substr(0, x) << " " << s.substr(x, n);
        else cout << s.substr(0, x - 1) << " " << s.substr(x - 1, n);
     }
   }
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
#define ll long long
void solve() {
     int n; string s; cin >> n >> s;
   	 int one = 0, zero = 0;
   	 for(auto u : s) {
   	 	if(u == '1') one++;
   	 	else zero++;
   	 } 
     if(one != zero) {
     	cout << 1 << "\n";
   	    cout << s << "\n";
     }
     else {
     	cout << 2 << "\n";
     	cout << s[0] << " " << s.substr(1, n) << "\n";
     }
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