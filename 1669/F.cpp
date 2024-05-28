//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int i = 0, j = n - 1, cnt = 0, ans = 0;
   int sum1 = 0, sum2 = 0;
   while(i <= j) {
    if(sum1 == sum2) {
      ans = cnt;
      sum1 += v[i];
      i++;
      cnt++;
    }
    else if(sum1 > sum2) {
      sum2 += v[j];
      j--; cnt++;
    }
    else if(sum1 < sum2) {
      sum1 += v[i];
      i++; cnt++;
    }
    //cout << sum1 << " " << sum2 << " " << cnt << " " << ans << "\n";
   }
   if(sum1 == sum2) ans = cnt ;
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int i = 1, j = n - 1, cnt1 = 1, cnt2 = 0;
   int sum1 = v[0], sum2 = 0, ans = 0;
   while(i <= j) {
      if(sum1 == sum2) {
       ans = cnt1 + cnt2;
      }
      if(sum1 >= sum2) {
       sum2 += v[j]; j--; cnt2++;
      }
      else if(sum1 < sum2) {
       sum1 += v[i]; i++; cnt1++;
      }
      //cout << sum1 << sum2 << endl;
   }
   if(sum1 == sum2) ans = cnt1 + cnt2;
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