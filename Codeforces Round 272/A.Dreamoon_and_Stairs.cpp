//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    if(n < m) {
        cout << -1; return 0;
    }
    int t = (n + 1) / 2;
    int x = (t + m - 1) / m;
    x *= m;
    cout << x << "\n";
    return 0;
} 

// approach 2:

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m; cin >> n >> m;
  int ma = n, mi = n / 2 + n % 2;
  for (int i = mi; i <= ma; i++) {
    if (i % m == 0) {
      cout << i << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
}