//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool is_prime(int n) {
  if(n <= 1) return false;
  for(int i = 2; i * i <= n; i++) {
    if(n % i == 0) return false;
  }
  return true;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while(n) {
    n++;
    if(is_prime(n)) break;
  }
  if(n == m) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
