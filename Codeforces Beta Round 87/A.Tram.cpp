//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n], b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  int now = 0, capasity = 0;
  for(int i = 0; i < n; i++) {
    now += (b[i] - a[i]);
    capasity = max(now, capasity);
  }
  cout << capasity << "\n";

  return 0;
}