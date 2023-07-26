//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int x = n / 2;
    if(x % 2) cout << "NO\n";
    else {
      cout << "YES\n";
      int sum1 = 0, sum2 = 0;
      for(int i = 2; i <= n; i += 2) {
        cout << i << " ";
        sum1 += i;
      } 
      for(int i = 1; i <= n - 2; i += 2) {
        cout << i << " ";
        sum2 += i;
     }
     cout << sum1 - sum2 << "\n";
    }
  }
  return 0;
}
// approach 2:
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    n /= 2;
    if (n % 2 != 0) {
      cout << "NO" << endl;
      continue;
    } else {
      cout << "YES" << endl;
    }
    for (int i = 1; i <= n; i++) {
      cout << 2 * i << " ";
    }
    for (int i = 1; i < n; i++) {
      cout << 2 * i - 1 << " ";
    }
    cout << 3 * n - 1 << endl;
  }
  return 0;
}