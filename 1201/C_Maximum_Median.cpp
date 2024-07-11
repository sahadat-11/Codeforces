//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int x = n / 2;
  int mid = a[x];
  for(int i = x + 1; i < n; i++) {
    int val = (i - x) * (a[i] - a[i - 1]);
    //cout << val << "\n";
    if(k >= val and k) {// ohterwise k will be neg
        k -= val;
        mid = a[i];
    }
    else {
        mid += (k / (i - x));
        k = 0;
    }
  }
  mid += (k / (n - x));
  cout << mid << "\n";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
bool isValid(vector<int> a, int k, int mid) {
    int op = 0;
    int x = a.size() / 2;
    for(int i = x; i < (int)a.size(); i++) {
        if(a[i] < mid) {
            op += (mid - a[i]);
        }
    }
    return op <= k;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int l = 1, h = 2e9, ans = 0;
  while(l <= h) {
    int mid = l + (h - l) / 2;
    if(isValid(a, k, mid)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      h = mid - 1;
    }
  }
  cout << ans << "\n";
  return 0;
}