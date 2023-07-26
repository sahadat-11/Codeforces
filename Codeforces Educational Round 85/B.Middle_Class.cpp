//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k; int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    //for(int i = 1; i <= n; i++) cout << a[i] << " ";
    ll sum = 0, c = 0;

    for(int i = 1; i <= n; i++) {
      sum += a[i];
      if(sum / i >= k) c++;
      else break;
    }

    cout << c << "\n";
  }
  return 0;
}
