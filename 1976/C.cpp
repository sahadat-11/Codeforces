//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(n + m + 1), b(n + m + 1);
   int p = 0, t = 0, p_sum = 0, t_sum = 0;
   int p1 = 0, p2 = 0, t1= 0, t2 = 0;
   for(int i = 0; i < n + m + 1; i++) {
   	cin >> a[i];
   }
   for(int i = 0; i < n + m + 1; i++) {
   	cin >> b[i];
   }
   for(int i = 0; i < n + m + 1; i++) {
    cin >> b[i];
   }
   if(a[i] > b[i] and p < n) {
     p++;
     p_sum += a[i];
     p2 = p1;
     p1 = i;
    }
    else {
     t++;
     t_sum += b[i];
     t2 = t1;
     t1 = i;
    }
   }
   cout << p << " " << p1 << " " << p2 << "\n";
   cout << t << " " << t1 << " " << t2 << "\n";
   cout << p_sum << " " << t_sum << "\n";
   for(int i = 0; i < n + m + 1; i++) {
    int sum = 0;
    if(a[i] > b[i]) {
      if(p > n) {
        sum += p_sum - a[i];
        sum += t_sum;
      }
      else {
        sum += p_sum - a[i];
        sum += t_sum;
        if(i == t1) sum += a[t2], sum -= b[t2];
        else sum += a[t1], sum -= b[t1];
      }
    }
    if(a[i] < b[i]) {
      if(t > m) {
        sum += p_sum;
        sum += t_sum - b[i];
      }
      else {
        sum += p_sum;
        sum += t_sum - b[i];
        if(i == p1) sum -= a[p2], sum += b[p2];
        else sum -= a[p1], sum += b[p1];
      }
    }
    cout << sum << " ";
   }
   cout << "\n";
   	
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
