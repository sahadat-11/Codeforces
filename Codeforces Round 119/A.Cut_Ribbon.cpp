//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, a, b, c; cin >> n >> a >> b >> c;
  int mx = 1;
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= n; j++) {
      int k = n - a * i - b * j; // a*i + b*j + c*z = n; cz = k;
      if(k >= 0 and k % c == 0) {
        mx = max(mx, i + j + k / c );
      }
    }
  }
  cout << mx << endl;
  return 0;
}
// approah 2:

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, b, c, best = 0;
  cin >> n >> a >> b >> c;
  for (int i = 0; i <= n; i += a)
    for (int j = 0; j <= n; j += b) {
      int k = n - i - j;
      if (k >= 0 && k % c == 0) best = max(best, i / a + j / b + k / c);
    }
  cout << best << endl;

}
// complexity low from above;