//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 2];
  for(int i = 1; i <= n; i++) cin >> a[i];
  a[n + 1] = a[1];
  int mn = INT_MAX;
  int mna, mnb;
  for(int i = 1; i <= n; i++) {
    if(abs(a[i + 1] - a[i]) < mn) {
      mn = abs(a[i + 1] - a[i]);
      mna = i;
      if(i + 1 == n + 1) mnb = 1;
      else mnb  = i + 1;
    }
  }
  cout << mna << " " << mnb;
  return 0;
}