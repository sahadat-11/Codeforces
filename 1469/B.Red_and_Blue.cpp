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
     for(int i = 1; i <= n; i++) cin >> a[i];
     int m; cin >> m; int b[m + 1];
     for(int i = 1; i <= m; i++) cin >> b[i];
     int pre1[n + 1] = {0}, pre2[m + 1] = {0};
     int mx1 = 0, mx2 = 0;
     for(int i = 1; i <= n; i++) {
       pre1[i] = pre1[i - 1] + a[i];
       mx1 = max(mx1, pre1[i]);
     }
     for(int i = 1; i <= m; i++) {
       pre2[i] = pre2[i - 1] + b[i];
       mx2 = max(mx2, pre2[i]);
     }
     cout << mx1 + mx2 << "\n";
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
     int n; cin >> n; int a[n + 1];
     for(int i = 1; i <= n; i++) cin >> a[i];
     int m; cin >> m; int b[m + 1];
     for(int i = 1; i <= m; i++) cin >> b[i];
     partial_sum(a + 1, a + n + 1, a + 1);
     partial_sum(b + 1, b + m + 1, b + 1);
     int mx1 = 0, mx2 = 0;
     // for(int i = 1; i <= n; i++) {
     //  cout << pre1[i] << " ";
     // }
     // cout << "\n";
     // for(int i = 1; i <= m; i++) {
     //  cout << pre2[i] << " ";
     // }
     for(int i = 1; i <= n; i++) {
       mx1 = max(mx1, a[i]);
     }
     for(int i = 1; i <= m; i++) {
       mx2 = max(mx2, b[i]);
     }
     cout << mx1 + mx2 << "\n";
  }
  return 0;
}