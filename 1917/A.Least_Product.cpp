//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9; 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    int zero = 0, neg = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] == 0) zero++;
      if(a[i] < 0) neg++;
    }
    if(zero) {
      cout << 0 << "\n";
    }
    else if(neg % 2) {
      cout << 0 << "\n";
    }
    else {
      cout << 1 << "\n";
      cout << 1 << " " << 0 << "\n";
    }
  }
  return 0;
}


