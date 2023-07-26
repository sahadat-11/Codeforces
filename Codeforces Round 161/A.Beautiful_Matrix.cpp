//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int r = 0, c = 0;
  for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= 5; j++) {
      int x; cin >> x;
      if(x == 1) {
        r = i;
        c = j;
      }
    }
  }
  cout << abs(3 - r) + abs(3 - c);
  return 0;
}
