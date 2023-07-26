//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  int a, b, c, d;
    do {
    n++;
    a = n % 10;
    b = (n % 100) / 10;
    c = (n % 1000) / 100;
    d = n / 1000;
    //cout << a << " " << b << " " << c << " " << d;
    }while(a == b or b == c or c == d or d == a or b == d or c == a);
    cout << n;
  return 0;
}
