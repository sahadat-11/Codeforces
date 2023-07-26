//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 1], b[n + 1];
  for(int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i];
  }
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    bool flag = false;
    for(int j = 1; j <= n; j++) {
      if(a[i] == b[j] and i != j) flag = true;
    } 
    if(flag) cnt++;
  }
  cout << n - cnt;
  return 0;
}

// approach 2:
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[101], b[101];
  int ans = n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i];
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i != j) {
        if (a[i] == b[j]) {
          ans--;
          break;
        }
      }
    }
  }
  cout << ans << endl;
}