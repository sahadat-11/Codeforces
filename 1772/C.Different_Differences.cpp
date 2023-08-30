//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) {
      cout << (min(1 + i * (i - 1) / 2, k - n + i)) << " ";
    }
    cout << "\n";
  }  
  return 0;
}