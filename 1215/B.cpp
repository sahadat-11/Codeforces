//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1), pre_pro(n + 1, 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    if(a[i] > 0) a[i] = 1;
    else a[i] = -1;
    pre_pro[i] = pre_pro[i - 1] * a[i];
  }
  map<int, int> mp;
  mp[pre_pro[0]]++;
  int ans = 0;
  for(int i = 1; i <= n; i++) {
  	ans += mp[pre_pro[i]];
  	mp[pre_pro[i]]++;
  }
  cout << n * (n + 1) / 2 - ans << " " << ans << '\n';
  return 0;
}



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; int a[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   int sum = 1;
   ll ans = 0;
   map<int, int> mp;
   mp[sum]++;
   for(int i = 1; i <= n; i++) {
   	  if(a[i] > 0) sum *= 1;
   	  else sum *= (-1);
   	  ans += mp[sum];
      mp[sum]++;
   }
   cout << (1ll * n * (n + 1) / 2) - ans << " " << ans << "\n";
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