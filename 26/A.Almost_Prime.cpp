//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   for(int i = 1; i <= n; i++) {
      int x = i; int c = 0;
      for(int j = 2; j * j <= x; j++) {
         if(x % j == 0) {
            c++;
            while(x % j == 0) {
               x /= j;
            }
         }
      }
      if(x > 1) c++;
      if(c == 2) cnt++;
   }
   cout << cnt << endl;
   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3e3 + 7, mod = 1e9 + 7;
#define int long long
int pre_cal[N];
bool check(int n) {
   int cnt = 0;
   for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
         cnt++;
         while(n % i == 0) {
            n /= i;
         }
      }
   }
   if(n > 1) cnt++;
   if(cnt == 2) return true;
   return false;
}
void solve() {
   int n; cin >> n;
   cout << pre_cal[n];
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i < N; i++) {
   pre_cal[i] = pre_cal[i - 1] + check(i);
  }
  //for(int i = 1; i <= 100; i++) cout << pre_cal[i] << endl;
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}