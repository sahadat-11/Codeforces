//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  int x1, x2, y1, y2, m;
  cin >> x1 >> y1 >> x2 >> y2;
  if (y2 - y1 == 0) {
    m = x2 - x1;
    cout << x1 << " " << y1 + m << " " << x2 << " " << y2 + m;
  }
  else if (x2 - x1 == 0) {
    m = y2 - y1;
    cout << x2 + m << " " << y2 << " " << x1 + m << " " << y1;
  }
  else if (x2 - x1 == y2 - y1 || x2 - x1 == y1 - y2) {
    cout << x2 << " " << y1 << " " << x1 << " " << y2;
  } 
  else {
    cout << -1;
  }

}