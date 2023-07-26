//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x, y, z; cin >> x >> y >> z; // these are area;
                  //suppose x = a*b, y = b*c, z = c*a;
                 // a*b * c*a = x * z; // a*a = (x * y) / (b * c);
                  // a = sqrtl((x * z) / y);
  int a = sqrtl((x * z) / y);
  int b = sqrtl((x * y) / z);
  int c = sqrtl((y * z) / x);
  //cout << a << " " << b << " " << c;
  cout << 4 * (a + b + c);

  return 0;
}