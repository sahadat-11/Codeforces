//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n; cin >> n;
  if(n % 2 == 0) cout << n / 2 << "\n";
  else cout << (n / 2) - n;
  return 0;
}