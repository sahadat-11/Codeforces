//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3 + 8;
bitset<N>f; // initially false;
void sieve() {
   f[0]=f[1]=true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
    }
  }
 
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   vector<int> prime;
   for(int i = 2; i <= N; i++) {
    if(!f[i]) prime.push_back(i);
   }
   int n, k; cin >> n >> k;
   int c = 0;
   for(int i = 2; i <= n; i++) {
      int x = i;
      if(!f[x]) {
      for(int j = 0; j < prime.size() - 1; j++) {
         if(prime[j] + prime[j + 1] == x - 1) c++;
      }
     }
   }
   if(c >= k) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}