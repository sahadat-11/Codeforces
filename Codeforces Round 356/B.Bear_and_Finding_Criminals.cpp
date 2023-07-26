//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  int cnt = 0;
  int one = count(a + 1, a + n + 1, 1);
  //cout << one;
  for(int i = 0; i <= min(x, n - x); i++) {
    if(a[x - i] == 1 and a[x + i] == 0) cnt++;
    if(a[x - i] == 0 and a[x + i] == 1) cnt++;
  }
  //cout << cnt;
  cout << one - cnt << endl;
  return 0; 
}