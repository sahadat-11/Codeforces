//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t;
    while(t--) {
      int n; cin >> n; int a[n], b[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      for(int i = 0; i < n; i++) cin >> b[i];
      for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) swap(a[i], b[i]);
      }
      int mxa = *max_element(a, a + n);
      int mxb = *max_element(b, b + n);
      if(mxa == a[n - 1] and mxb == b[n - 1]) cout << "YES\n";
      else cout << "NO\n";
    }
    return 0;
}