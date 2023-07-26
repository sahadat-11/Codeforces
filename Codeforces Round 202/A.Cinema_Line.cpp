//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int twf = 0, fifty = 0;
  bool flag = true;
  for(int i = 0; i < n; i++) {
    if(a[i] == 25) twf++;
    if(a[i] == 50) {
      if(!twf) flag = false;
      else {
        fifty++;
        twf--;
      }
    }
    if(a[i] == 100) {
      if(fifty >= 1 and twf >= 1) {
        fifty--; twf--;
      }
      else if(twf >= 3) twf -= 3;
      else flag = false;
    }
  }
  if(flag) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}