//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k; int a[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   //sort(a + 1, a + 1 + n);
   ll pre_sum[n + 1] = {0};
   int indx = -1;
   for(int i = 1; i <= n; i++) {
     pre_sum[i] = pre_sum[i - 1] + a[i];
   }
   int mn = INT_MAX;
   for(int i = 0; i <= n - k; i++) {
     ll x = pre_sum[i + k] - pre_sum[i];
     //cout << x << endl;
     if(mn > x) {
         mn = x;
         indx = i + 1;
     }
   }
   cout << indx << "\n";
   //cout << pre_sum[k] << "\n";
   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int res = 0;
  for(int i = 0; i < k; i++) res += a[i];
  int current_sum = res, minidx = k - 1;

  for(int i = k; i < n; i++) {
    current_sum += a[i] - a[i - k];
    if(current_sum < res) {
      res = current_sum;
      minidx = i;
    }
  }
  //cout << res <<  " " << minidx ;
  cout << minidx - k + 2 << "\n";
  return 0;
}

//https://prnt.sc/VB8GHJ2HA6pc