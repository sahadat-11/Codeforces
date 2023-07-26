//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int a[N], b[N];
ll pre1[N], pre2[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 1; i <= n; i++) {
   cin >> a[i]; 
   b[i] = a[i];
  }
  sort(b + 1, b + n + 1);
  //for(int i = 1; i <= n; i++) cout << b[i] << " ";
  for(int i = 1; i <= n; i++) {
    pre1[i] = a[i] + pre1[i - 1];
  }
  //for(int i = 1; i <= n; i++) cout << pre1[i] << " ";
  for(int i = 1; i <= n; i++) {
    pre2[i] = b[i] + pre2[i - 1];
  }
  //for(int i = 1; i <= n; i++) cout << pre2[i] << " ";
  int m; cin >> m;
  for(int i = 1; i <= m; i++) {
    int type, l, r; cin >> type >> l >> r;
    if(type == 1) cout << pre1[r] - pre1[l - 1] << "\n";
    else cout << pre2[r] - pre2[l - 1] << "\n";
  }
  return 0;
}