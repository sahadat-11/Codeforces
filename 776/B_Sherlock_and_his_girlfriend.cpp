//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
bitset<N>f;
vector<int> primes;
void sieve() {
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   primes.push_back(2);
   for(int i = 3; i <= N; i += 2) {
      if(!f[i]) primes.push_back(i);
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  int n; cin >> n;
  if(n > 2) {
    cout << 2 << "\n";
  }
  else {
    cout << 1 << "\n";
  }
  for(int i = 2; i <= n + 1; i++) {
    if(!f[i]) {
        cout << 1 << " ";
    }
    else {
        cout << 2 << " ";
    }
  }
  return 0;
}