//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  bool flag = false;
  for(int i = 0; i < n - 2; i++) {
     if(a[i] + a[i + 1] > a[i + 2]) flag = true;
  }
  if(flag) cout << "YES\n";
  else cout << "NO\n";
  return 0; 
}
