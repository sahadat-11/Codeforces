//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  int sum = 0, odd = 0, even = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    if(a[i] % 2) odd++;
    else even++;
  }
  if(sum % 2) cout << odd;
  else cout << even;
  return 0; 
}
