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
    for(int i = 0; i < n - 1; i++) cin >> a[i];
    cout << a[0] << " ";
    for(int i = 0; i < n - 2; i++) {
      cout << min(a[i], a[i + 1]) << " ";
    }
    cout << a[n - 2] << "\n";
  } 
  return 0;
}