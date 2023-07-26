//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  int cnt1 = 0, cnt2 = 0, sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] == 100) cnt1++;
    else cnt2++;
    sum += a[i];
  }
  if((cnt1 == n or cnt2 == n) and n % 2) cout << "NO\n";
  else if((sum / 2) % 100 == 0) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}