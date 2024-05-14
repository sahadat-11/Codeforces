//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int lcmfind(int a, int b) {
	return a / (__gcd(a, b)) * b;
}
void solve() {
   int n; cin >> n;
   for(int i = n; ; i++) {
   	int x = i, lcm = 1;
   	while(x) {
   	  // if(x % 10 == 0) {
   	  // 	x /= 10;
   	  // 	continue;
   	  // }
   	  if(x % 10 != 0) lcm = lcmfind(lcm, x % 10);
   	  x /= 10;
   	}
   	if(i % lcm == 0) {
   	  cout << i << "\n";
   	  return;
   	}	
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lcmfind(int a, int b) {
    return a / (__gcd(a, b)) * b;
}
void solve() {
      ll n; cin >> n;
      ll x = n;
      while(x) {
        ll temp = x % 10;
        x /= 10;
        if(temp > 0 and n % temp != 0) {
            n++;
            x = n;
        }
      }
      cout << n << "\n";    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int lcm = 1;
    // for(int i = 1; i <= 9; i++) {
    //     lcm = lcmfind(lcm, i);
    // }
    // cout << lcm << endl; // a number which is divisibile by 1 to 9 each number;
    // the minimum number is 2520;

    int t; cin >> t;
    while(t--) {
      solve();
    }
    return 0;
} 