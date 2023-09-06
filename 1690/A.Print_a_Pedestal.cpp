//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      int t; cin >> t;
      while(t--) {
        int n; cin >> n;
        int x = n % 3;
        int a, b, c;
        if(x == 0) {
          a = n / 3 + 1;
          b = n / 3;
          c = n / 3 - 1;
        }
        if(x == 1) {
          a = n / 3 + 2;
          b = n / 3;
          c = n / 3 - 1;
        }
        if(x == 2) {
          a = n / 3 + 2;
          b = n / 3 + 1;
          c = n / 3 - 1;
        }
        cout << b << " " << a << " " << c << "\n";
      }
    return 0;
} 


#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, a, b, c; cin >> t;
  while (t--) {
    cin >> n;
    a = (n + 2) / 3;
    b = a + 1;
    c = (n - a - b);
    if (c == 0) {
      a--, c++;
    }
    cout << a << " " << b << " " << c << endl;
  }
  return 0;
}