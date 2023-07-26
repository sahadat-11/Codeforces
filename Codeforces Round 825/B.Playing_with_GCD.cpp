//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lcm(int a, int b) {
  return a / (__gcd(a, b)) * b;
}
int main() {
    int t; cin >> t;
    while(t--) {
      int n; cin >> n; int a[n], b[n + 1];
      for(int i = 0; i < n; i++) cin >> a[i];
      b[0] = a[0];
      b[n] = a[n - 1];
      for(int i = 1; i < n; i++) {
        b[i] = lcm(a[i - 1], a[i]);
      }
      //for(int i = 0; i <= n; i++) cout << b[i] << " "; cout << "\n";
      bool flag = true;
      for(int i = 0; i < n; i++) {
        if(__gcd(b[i], b[i + 1]) != a[i]) flag = false;
      }
      if(flag) cout << "YES\n";
      else cout << "NO\n";
    } 
	return 0;
}

// approach 2: 

#include <bits/stdc++.h>

using namespace std;
int main() {
  int tc; cin >> tc;
  while (tc--) {
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int flag = 1;
    for (int i = 1; i < n - 1; i++)
      if ((a[i] % __gcd(a[i - 1], a[i + 1]) != 0)) flag = 0;
    puts(flag ? "YES" : "NO");
  }

  return 0;
}