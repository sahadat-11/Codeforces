//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m, d; cin >> n >> m >> d;
  int k = n * m; int a[k];
  for(int i = 0; i < k; i++) cin >> a[i];
  sort(a, a + k);
  int x = k / 2; // for mid element
  int move = 0;
  bool flag = true;
  for(int i = 0; i < k; i++) {
    move += (abs(a[x] - a[i]) / d);
    if(abs(a[x] - a[i]) % d != 0) flag = false;
  }
  if(!flag) cout << -1;
  else cout << move;
  return 0;
}