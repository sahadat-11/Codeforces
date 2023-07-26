//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, k; cin >> n >> k;
  if(n < k) {
    cout << "NO\n";
    return;
  }
  if(n == k) {
    cout << "YES\n";
    for(int i = 1; i <= k; i++) cout << 1 << " ";
    cout << "\n";
    return;
  }
  
  if(n % 2 and (k % 2 == 0)) { // odd even;
    cout << "NO\n";
    return;
  }

  if(n % 2 and k % 2) { // odd odd;
    cout << "YES\n";
    for(int i = 1; i < k; i++) cout << 1 << " ";
    cout << (n - (k - 1)) << "\n";
    return;
  }

  if((n % 2 == 0) and k % 2) { // even odd;
    if(k > n / 2) {
      cout << "NO\n";
      return;
    }
    cout << "YES\n";
    for(int i = 1; i < k; i++) cout << 2 << " ";
    cout << (n - 2 * (k - 1)) << "\n";
    return;
  }
  
  if(n % 2 == 0 and k % 2 == 0) { // even even
    cout << "YES\n";
    for(int i = 1; i < k; i++) cout << 1 << " ";
    cout << n - (k - 1) << "\n";
    return;
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    solve();
  }
 
  return 0;
}
