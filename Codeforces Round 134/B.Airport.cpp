//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m; cin >> n >> m; int a[m], b[m];
  for(int i = 0; i < m; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  int mxs = 0, mns = 0;
  sort(a, a + m);
  sort(b, b + m);
  int t = 0;
  for(int i = 0; i < n; i++) { // always take minimum;
    mns += a[t];
    a[t]--;
    if(a[t] == 0) t++;
  }
  for(int i = 0; i < n; i++) { // always take maximum;
    mxs += b[m - 1];
    b[m - 1]--;
    sort(b, b + m);
  }

  cout << mxs << " " << mns << "\n";
  
  return 0;
}
