//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n], b[n];
  for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
  int ans = 0;
  for(int i = 0; i < n; i++) {
    int x = a[i], y = b[i];
    int down = 0, upper = 0, left = 0, right = 0;
    for(int j = 0; j < n; j++) {
      if(a[j] == x) {
        if(b[j] > y) upper++;
        if(b[j] < y) down++;
      }
      if(b[j] == y) {
        if(a[j] > x) right++;
        if(a[j] < x) left++;
      }
    }
    if(down and upper and left and right) ans++;
  }
  cout << ans;
  return 0;
}