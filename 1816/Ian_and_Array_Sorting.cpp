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
    for(int i = 1; i < n; i++) {
      int t = max(0, a[i - 1] - a[i]);
      //cout << t << endl; 
      a[i + 1] += t; a[i] += t;
    }
    //for(int i = 0; i < n; i++) cout << a[i] << " ";
    for(int i = n - 2; i > 0; i--) {
      int t = max(0, a[i] - a[i + 1]);
      cout << t << endl;
      a[i] -= t; a[i - 1] -= t;
    }
  }
  return 0;
}
