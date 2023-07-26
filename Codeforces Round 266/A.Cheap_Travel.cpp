//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, a, b; cin >> n >> m >> a >> b;
  int ans;
  if(m * a <= b) ans = n * a;
  else ans = (n / m) * b + min((n % m) * a, b);
  cout << ans << "\n";  
 
  return 0;
}
