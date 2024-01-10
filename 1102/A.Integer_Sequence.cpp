//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   ll sum = 1ll * n * (n + 1) / 2;
   cout << (sum & 1) << "\n";
   return 0;
}


// https://prnt.sc/pAUL83SbP_9o