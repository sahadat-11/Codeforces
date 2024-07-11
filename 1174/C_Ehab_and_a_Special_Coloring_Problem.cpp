//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int prime[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int cnt = 0;
  for(int i = 2; i <= n; i++) {
    if(prime[i] == 0) {
        cnt++;
        for(int j = i; j <= n; j += i) {
            prime[j] = cnt;
        }
    }
  }
  for(int i = 2; i <= n; i++) {
    cout << prime[i] << " ";
  }
  return 0;
}