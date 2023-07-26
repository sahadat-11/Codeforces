//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] % 2 != i % 2) {
        if(i % 2) odd++;
        else even++;
      }
    }
    if(even == odd) cout << even << "\n";
    else cout << "-1\n";
  }
  return 0;
}