//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int find_lcm(int a, int b) {
	return a / __gcd(a, b) * b;
}
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
    cin >> a[i]; 
   }
   int lcm = a[0];
   for(int i = 1; i < n; i++) {
   	lcm = find_lcm(lcm, a[i]);
   }
   //cout << lcm << "\n";
   int sum = 0;
   for(int i = 0; i < n; i++) {
    sum += lcm / a[i]; 
   }
   //cout << sum << "\n";
   if(sum >= lcm) cout << "-1\n";
   else {
   	for(int i = 0; i < n; i++) {
   	 cout << lcm / a[i] << " "; 
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