//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  double sum = 0;
  for(int i = 0; i < n; i++) sum += a[i];
  cout << fixed << setprecision(12) << (sum / n);
  return 0;
}
