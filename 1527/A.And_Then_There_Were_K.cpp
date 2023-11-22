//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int x = log2(n);
    cout << (1 << x) - 1 << "\n";
  }
  return 0;
}


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
     int n; cin >> n;
     int x = 31 - __builtin_clz(n);
     cout << (1 << x) - 1 << "\n";
  }
  return 0;
}