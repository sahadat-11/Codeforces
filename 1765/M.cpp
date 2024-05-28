//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int lcm(int a, int b) {
  return a / (__gcd(a, b)) * b;
}
void solve() {
   int n; cin >> n;
   // for(int i = 1; i <= n / 2; i++) {
   //  cout << i << " " << n - i << " " <<  lcm(i, n - i) << endl;
   // }
   int x = n;
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
   	if(n % i == 0) {
   	  divs.push_back(i);
   	  if(i != n / i) {
   	  	divs.push_back(n / i);
   	  }
   	}
   }
   sort(divs.begin(), divs.end());
   int a = divs[(int)divs.size() - 2];
   cout << x - a << " " << a << "\n";
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