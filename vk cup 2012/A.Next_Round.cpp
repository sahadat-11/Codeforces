//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  int x = a[k];
  int cnt = 0;
  for(int i = 1; i <=  n; i++) {
    if(a[i] >= x and a[i]) cnt++;
  }
  cout << cnt << "\n";
  return 0;
  
}