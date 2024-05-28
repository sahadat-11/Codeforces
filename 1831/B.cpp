//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   for(int i = 0; i < n; i++) {
     cin >> b[i];
   }
   map<int, int> mp1, mp2;
   int cnt1 = 1, cnt2 = 1;
   mp1[a[0]]++;
   for(int i = 1; i < n; i++) {
   	if(a[i] == a[i - 1]) {
   	  cnt1++;
   	}
   	else {
   	  cnt1 = 1;
   	}
   	mp1[a[i]] = max(mp1[a[i]], cnt1);
   }
   mp2[b[0]]++;
   for(int i = 1; i < n; i++) {
   	if(b[i] == b[i - 1]) {
   	  cnt2++;
   	}
   	else {
   	  cnt2 = 1;
   	}
   	mp2[b[i]] = max(mp2[b[i]], cnt2);
   }
   int mx = 1;
   for(int i = 1; i <= 2 * n; i++) {
   	mx = max(mx, mp1[i] + mp2[i]);
   }
   cout << mx << "\n";
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