//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  int even = 0, odd = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] % 2) odd++;
    else even++;
  }
  if(odd == 1) {
    for(int i = 0; i < n; i++) {
      if(a[i] % 2) {
        cout << i + 1;
        return 0;
      }
    }
  }
  if(even == 1) {
    for(int i = 0; i < n; i++) {
      if(a[i] % 2 == 0) {
        cout << i + 1;
        return 0;
      }
    }
  }
  return 0;
}

// approach 2:
#include<bits/stdc++.h>
using namespace std;
int a, sum, l2, l21, k;
int main() {
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> k;
    if (k % 2 == 0) {
      sum++;
      l2 = i;
    } else {
      l21 = i;
    }
  }
  (sum == 1) ? cout << l2 + 1 << endl: cout << l21 + 1 << endl;
  return 0;
}