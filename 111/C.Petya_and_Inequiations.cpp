//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	ll n, x, y; cin >> n >> x >> y;
  ll a = (y - n + 1);
  if(n > y) cout << "-1\n";
  else if(a * a < (x - n + 1)) cout << "-1\n";
  else {
    for(int i = 1; i < n; i++) cout << 1 << " ";
    cout << a << "\n";
  }
  return 0;
}