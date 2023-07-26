//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for (int i = -n; i <= n; i++) {
    int m = n - abs(i);
    for (int j = 0; j < abs(i); j++)
      cout << "  ";
    for (int k = 0; k < m; k++)
      cout << k << " ";
    for (int l = m; l > 0; l--)
      cout << l << " ";
    cout << "0" << endl;
  }
  return 0;
}
