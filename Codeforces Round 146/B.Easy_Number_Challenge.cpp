//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define mod 1073741824;
#define ll long long
const int N = 1e6 + 7;
int divs[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i <= N; i++) {
    for(int j = i; j <= N; j += i) divs[j]++;
  }
  int a, b, c; cin >> a >> b >> c;
  ll sum = 0;
  for(int i = 1; i <= a; i++) {
    for(int j = 1; j <= b; j++) {
      for(int k = 1; k <= c; k++) {
        int x = divs[i * j * k];
        sum += x;
        sum %= mod;
      }
    }
  }
  cout << sum << "\n";
  return 0;
}
