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
    for(int i = 0; i < n; i++) cin >> a[i];
    int x = 0;
    for(int i = 0; i < n - 1; i++) {
      if(a[i] > a[i + 1]) {
        x = max(x, (a[i] + a[i + 1] + 1) / 2);
      }
    }
    for(int i = 0; i < n; i++) {
      a[i] = abs(a[i] - x);
    }
    for(int i = 0; i < n - 1; i++) {
      if(a[i] > a[i + 1]) x = -1;
    }
    cout << x << "\n";
  }  
  return 0;
}