//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  ll sum = 0;
  int smallodd = INT_MAX;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    if(a[i] % 2) smallodd = min(smallodd, a[i]);
  }
  if(sum % 2 == 0) cout << sum << "\n";
  else cout << sum - smallodd << "\n";
  return 0;
  
}