//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; 
  int leftcnt = 0, rightcnt = 0;
  for(int i = 1; i <= n; i++) {
    int l, r; cin >> l >> r;
    leftcnt += l; rightcnt += r;
  }
  cout << min(leftcnt, n - leftcnt) + min(rightcnt, n - rightcnt);
  // left side = min(0, 1);     +   right side = min(0, 1);
  return 0;
}