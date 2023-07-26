//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  int sum1 = 0, sum2 = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum1 += a[i];
  }
  sort(a, a + n, greater<int>());
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    cnt++;
    sum2 += a[i];
    sum1 -= a[i];
    if(sum2 > sum1) break;
  }
  cout << cnt << "\n";

  return 0;
}
