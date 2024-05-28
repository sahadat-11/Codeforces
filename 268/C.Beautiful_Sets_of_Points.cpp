//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int n, m; cin >> n >> m;
  int x = min(n, m);
  cout << x + 1 << "\n";
  for(int i = 0; i <= x; i++) {
    cout << i << " " << (x - i) << "\n";
  }
  return 0;
}