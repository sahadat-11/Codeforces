//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int arr[n + 1];
  for(int i = 1; i <= n; i++) cin >> arr[i];
  int sum = 0;
  for(int j = 1; j <= m; j++) {
    int t; cin >> t;
    if(t == 1) {
      int x, y; cin >> x >> y;
      arr[x] = y - sum;
    }
    if(t == 2) {
      int y; cin >> y;
      sum += y;
    }
    if(t == 3) {
      int y; cin >> y;
      cout << arr[y] + sum << "\n";
    }
  }
  return 0;
}

// approach 2 : tle (but important)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int arr[n + 1];
  for(int i = 1; i <= n; i++) cin >> arr[i];
  for(int j = 1; j <= m; j++) {
    int x, y; cin >> x >> y;
    if(x == 1) {
      int a; cin >> a;
      arr[y] = a;
    }
    if(x == 2) {
      for(int i = 1; i <= n; i++) arr[i] = arr[i] + y;
    }
    if(x == 3) cout << arr[y] << "\n";
  }
  return 0;
}
