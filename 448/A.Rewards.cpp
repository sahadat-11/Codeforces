//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a1, a2, a3; cin >> a1 >> a2 >> a3;
  int b1, b2, b3; cin >> b1 >> b2 >> b3;
  int a = a1 + a2 + a3;
  int b = b1 + b2 + b3;
  int n; cin >> n;
  int sum = (a + 4) / 5 + (b + 9) / 10;
  if(sum > n) cout << "NO\n";
  else cout << "YES\n";
  return 0;
} 
