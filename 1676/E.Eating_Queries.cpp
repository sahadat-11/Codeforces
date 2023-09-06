//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int binary(int a[], int n, int x) {
  int l = 0, r = n - 1;
  int ans = -1;
  while(l <= r) {
    int mid = (l + r) / 2;
    if(a[mid] >= x) {
      ans = mid;
      r = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  if(ans != -1) return ans + 1;
  return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, q; cin >> n >> q; int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n,greater<int>());
    //for(int i = 0; i < n; i++) cout << a[i] << " ";
    for(int i = 1; i < n; i++) {
      a[i] += a[i - 1];
    }
    //for(int i = 0; i < n; i++) cout << a[i] << " ";
    while(q--) {
      int x; cin >> x;
      int y = binary(a, n, x);
      cout << y << endl;
    }
  } 
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, q; cin >> n >> q; int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n,greater<int>());
    for(int i = 1; i < n; i++) {
      a[i] += a[i - 1];
    }
    while(q--) {
      int x; cin >> x;
      int y = lower_bound(a, a + n, x) - a;
      if(y >= n) cout << -1 << "\n";
      else cout << y + 1<< "\n"; // for 0 indexing
    }
  } 
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, q; cin >> n >> q; int a[n + 1];
    for(int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    sort(a + 1, a + n + 1,greater<int>());
    for(int i = 2; i <= n; i++) {
      a[i] += a[i - 1];
    }
    while(q--) {
      int x; cin >> x;
      int y = lower_bound(a + 1, a + n + 1, x) - a;
      if(y > n) cout << -1 << "\n";
      else cout << y << "\n"; // for 1 indexing
    }
  } 
  return 0;
}