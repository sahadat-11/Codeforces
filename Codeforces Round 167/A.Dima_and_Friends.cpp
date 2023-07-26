//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int sum = 0, cnt = 0;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    sum += x;
  }
  for(int i = 1; i <= 5; i++) {
    if((sum + i) % (n + 1) != 1) cnt++;
  }
  cout << cnt << "\n";
  return 0;
}