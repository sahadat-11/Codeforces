//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  int a[k];
  for(int i = 0; i < k; i++) {
    a[i] = 1;
  }
  int sum = k;
  for(int i = 0; i < k; i++) {
    while(sum + a[i] <= n) { // a[i] always power of two
      sum += a[i];
      (a[i] <<= 1);
    }  
  }
  sort(a, a + k);
  if(sum != n) cout << "NO\n";
  else {
    cout << "YES\n";
      for(int i = 0; i < k; i++) cout << a[i] <<" ";

  }
  return 0;
}
// https://prnt.sc/njm8yRKqQICx