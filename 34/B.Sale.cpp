//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  int neg = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] < 0) neg++;
  }
  sort(a, a + n);
  ll sum = 0;
  for(int i = 0; i < min(k, neg); i++) {
    sum += abs(a[i]);
  }
  cout << sum << "\n";
  return 0;
}