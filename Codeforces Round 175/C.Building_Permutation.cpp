//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  sort(a + 1, a + n + 1);
  ll move = 0;
  for(int i = 1; i <= n; i++) {
    move += abs(i - a[i]);
  }
  cout << move << "\n";
  return 0;
}