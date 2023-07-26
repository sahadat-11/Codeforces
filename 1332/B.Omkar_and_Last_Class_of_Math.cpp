//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<int> divs;
    for(int i = 1; i * i <= n; i++) {
      if(n % i == 0) {
        divs.push_back(i);
        if(i != n / i) divs.push_back(n / i);
      }
    }
    sort(divs.begin(), divs.end());
    int k = divs[divs.size() - 2];
    cout << k << " " << n - k << "\n";
  }
  return 0;
}

// approach 2:
#include<bits/stdc++.h>

using namespace std;

void solve() {
  int n, i;
  cin >> n;

  int sq = sqrt(n + 1);
  for (i = 2; i <= sq; i++) {
    if (n % i == 0) {
      cout << n / i << " " << n - (n / i) << endl; // n / i holo largest proper divisor
      return;
    }
  }

  cout << "1 " << n - 1 << endl; // largest proper divisor 1 hole
  return;
}

int main() {

  int t = 1;
  cin >> t;
  while (t--) {
    solve();

  }
}

// approach 3:

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll p = n;
    for (ll i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        p = i;
        break;
      }
    }
    cout << n / p << " " << n - (n / p) << endl;
  }
}