//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n, m, k; cin >> n >> m >> k;
   m -= n; // at first all hobbites gate 1 pillow;
   ll a = 1, c = 1;
   while(m > 0) { // jodi sudo while(m) di, tahole infine loop a porde karon ata (-) er jonno projojo;
      if(k + a <= n) c++;// if right neibour is possibe;
      if(k - a >= 1) c++;// if left neibour is possible
      m -= c;
      a++;
   }
   cout << a;
   return 0;
}