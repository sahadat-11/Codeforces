//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n; int v[n];
   for(int i = 0; i < n; i++) cin >> v[i];
   int max_sum = v[0];
   int cur_sum = max(0ll, v[0]);
   int pre = (v[0] % 2 + 2) % 2; 
   for(int i = 1; i < n; i++) {
      int cur = (v[i] % 2 + 2) % 2;
      if(pre != cur) {
        cur_sum += v[i];
        max_sum = max(max_sum, cur_sum);
      }
      else {
         max_sum = max(max_sum, v[i]);
         cur_sum = v[i];
      }
      if(cur_sum < 0) cur_sum = 0;
      pre = cur;
   }
   cout << max_sum << "\n";
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      ll max_sum = INT_MIN;
      ll cur_sum = 0;
      int current = a[0] % 2;
      int previous;
      if(current) previous = 0;
      else previous = 1;
      for(int i = 0; i < n; i++) {
         current = a[i] % 2;
         if(current == -1) current = 1; // for negative number
         if(previous == current) {
            max_sum = max(max_sum, 1ll*a[i]);
            cur_sum = a[i];
            if(cur_sum < 0) cur_sum = 0;
         }
         else {
            cur_sum += a[i];
            max_sum = max(max_sum, cur_sum);
            if(cur_sum < 0) cur_sum = 0;
         }
         previous = current;
         //cout << cur_sum << " " << a[i] % 2 << endl;
      }
      cout << max_sum << "\n";
   }
   return 0;
}

