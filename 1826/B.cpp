//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   bool palindrome = true;
   for(int i = 0, j = n - 1; i <= j; i++, j--) {
   	if(a[i] != a[j]) palindrome = false;
   }
   if(palindrome) {
   	cout << "0\n";
   }
   else {
   	int gap = 0;
   	for(int i = 0, j = n - 1; i <= j; i++, j--) {
   	  gap = __gcd(gap, abs(a[i] - a[j]));	  
    }
    cout << gap << "\n";
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