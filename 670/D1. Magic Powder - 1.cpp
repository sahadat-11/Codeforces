 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k; int a[n], b[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) cin >> b[i];
   int cnt = 0;
   while(k) {
   	  for(int i = 0; i < n; i++) {
   	  	b[i] = b[i] - a[i];
   	  	if(b[i] < 0) {
   	  		k = k + b[i];
   	  		b[i] = 0;
   	  	}
   	  }
   	  if(k < 0) break;
   	  else cnt++;
   }
   cout << cnt << endl;
   return 0;
}
 