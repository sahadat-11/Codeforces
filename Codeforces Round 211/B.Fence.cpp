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
