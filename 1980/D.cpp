//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), suf(n);

   for(int i = 0; i < n; i++) {
    cin >> a[i];
   }

   vector<int> b(n + 1);

   for(int i = 1; i < n; i++) {
   	b[i] = (__gcd(a[i], a[i - 1]));
   }
   suf[n - 1] = 0;
   for(int i = n - 2; i >= 1; i--) {
   	if(b[i] > b[i + 1]) {
   	  suf[i] = suf[i + 1] + 1;
   	}
   	else suf[i] = suf[i + 1];
   }
   // for(int i = 1; i < n; i++) {
   // 	cout << suf[i] << " ";
   // }
   // cout << "\n";
   for(int i = 1; i < n - 1; i++) {
   	int x = __gcd(a[i - 1], a[i + 1]);
   	if(x < b[i + 1] and suf[i + 1]) {
   	  cout << "YES\n"; return;
   	}
   }
   cout << "NO\n";
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