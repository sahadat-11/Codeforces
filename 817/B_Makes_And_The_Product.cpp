//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    mp[a[i]]++;
  }
  int ans = 1;
  int i = a[0], j = a[1], k = a[2];
  if(i == k) {
    int cnt = mp[i];
    ans = cnt * (cnt - 1) * (cnt - 2) / 6;
  }
  else if(i == j) {
    ans = mp[k];
  }
  else if(j == k) {
    int cnt = mp[j];
    ans = cnt * (cnt - 1) / 2;
  }
  else {
    ans = mp[k];
  }
  cout << ans << "\n";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> mp;
   for(int i = 0; i < n; i++) mp[v[i]]++;
   sort(v.begin(), v.end());
   if(v[0] == v[2]) {
   	 int cnt = mp[v[2]];
   	 cout << (1ll * cnt * (cnt - 1) * (cnt - 2) / 6); // (cntC3)
   }
   else if(v[1] == v[2]) {
     int c = mp[v[2]];
     cout << (1ll * c * (c - 1) / 2); // (cntC2);
   }
   else {
   	 cout << mp[v[2]];
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