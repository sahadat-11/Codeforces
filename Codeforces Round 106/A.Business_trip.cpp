//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int k; cin >> k;
  int a[12];
  for(int i = 0; i < 12; i++) cin >> a[i];
  sort(a, a + 12, greater<int>());
  int cnt = 0, sum = 0;
  for(int i = 0; i < 12; i++) {
    if(sum < k) {
      sum += a[i];
      cnt++;
    }
    else break;
  }
  if(sum < k) cout << -1;
  else cout << cnt << "\n";
  return 0;
}
