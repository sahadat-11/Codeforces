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
    cout << (n - 2) / k + 2 << "\n";
  }
  
  return 0;
}
