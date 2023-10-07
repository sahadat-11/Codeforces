//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	   int n; cin >> n; int a[n];
       for(int i = 0; i < n; i++) cin >> a[i];
       sort(a, a + n);
       ll mx1 = 1ll* a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3];
       ll mx2 = 1ll* a[0] * a[1] * a[2] * a[3] * a[n - 1];
       ll mx3 = 1ll* a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
       cout << max(mx1, max(mx2, mx3)) << "\n";
   }
   
   return 0;
}
//https://prnt.sc/AhRNBHm1n6AN 