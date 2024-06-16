//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  int n, w; cin >> n >> w; int a[n];
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     mp[a[i]]++;
   }
   int cnt = 0;
   int temp = w;
   int res = 0;
   while(cnt != n) {
    w = temp;
   for(auto it = mp.rbegin(); it != mp.rend(); it++) {
      while(it->first <= w and it->second > 0) {
        w -= it->first;
        it->second--;
        cnt++;
      }
    }
    res++;
   }
   cout << res << endl;
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, w; cin >> n >> w;
   vector<int> cnt(32, 0);
   for(int i = 0; i < n; i++) {
    int x; cin >> x;
    cnt[log2(x)]++;
   }
   int ans = 0;
   while(n) {
      int cur = w;
      for(int i = 30; i >= 0; i--) {
      while(cnt[i]) {
        if(cur >= (1 << i)) {
          cur -= (1 << i);
          n--;
          cnt[i]--;
        }
        else break;
      }
    }
    ans++;
   }
   cout << ans << "\n";

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