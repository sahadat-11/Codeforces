//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n], b[n], c[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n - 1; i++) cin >> b[i];
  for(int i = 0; i < n - 2; i++) cin >> c[i];
  int sum1 = 0, sum2 = 0, sum3 = 0;

  for(int i = 0; i < n; i++) sum1 += a[i];
  for(int i = 0; i < n - 1; i++) sum2 += b[i];
  for(int i = 0; i < n - 2; i++) sum3 += c[i];
  cout << sum1 - sum2 << " " << sum2 - sum3;
  return 0;
}
