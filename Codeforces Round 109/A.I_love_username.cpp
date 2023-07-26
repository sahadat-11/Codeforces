//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int mn = a[0], mx = a[0];
  int cnt = 0;
  for(int i = 1; i < n; i++) {
    if(a[i] > mx) {
      mx = a[i];
      cnt++;
    }
    if(a[i] < mn) {
      mn = a[i];
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}