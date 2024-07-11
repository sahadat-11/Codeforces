//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if(is_sorted(a.begin(), a.end())) {
    cout << "YES\n";
    cout << "1 1\n";
  }
  else {
    for(int i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) {
            reverse(a.begin(), a.begin() + i);
            if(is_sorted(a.begin(), a.end())) {
               cout << "YES\n";
               cout << 1 << " " << i << "\n";
               return 0;
            } 
        }
    }
    cout << "NO\n";
  }
  return 0;
}