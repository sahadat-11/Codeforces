//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  int n; cin >> n; int a[n + 1];
  ll oddsum = 0, evensum = 0;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    if(i % 2) oddsum += a[i];
    else evensum += a[i];
  }
 if(oddsum >= evensum) {
   for(int i = 1; i <= n; i++) {
     if(i % 2) cout << a[i] << " ";
     else cout << 1 << " ";
   }
 }
 if(oddsum < evensum) {
   for(int i = 1; i <= n; i++) {
     if(i % 2 == 0) cout << a[i] << " ";
     else cout << 1 << " ";
   }
 }
 cout << "\n";
}
  return 0;
}

// approach 2:

#import < iostream >
  using namespace std;
main() {
  int t, n, m;
  for (cin >> t; t--;)
    for (cin >> n; n--; cout << ' ') cin >> m, cout << (1 << __lg(m));
}

// approach 3:

#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main() {
  ll t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    while (n--) {
      int a;
      cin >> a;
      int k = (log(a) / log(2));
      cout << (1 << k) << " ";
    }
    cout << endl;
  }
}