//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int k, n, w; cin >> k >> n >> w;
   ll sum = 0;
   for(int i = 1; i <= w; i++) {
   	 sum += (1ll*i * k);
   }
   cout << max(1ll*0, sum - n);
   return 0;
}