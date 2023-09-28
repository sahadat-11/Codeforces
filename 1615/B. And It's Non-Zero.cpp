 // //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
   // int t; cin >> t;
   // while(t--) {
   	// int l, r; cin >> l >> r;
   	// int mx = 0;
   	// for(int i = 0; i < 32; i++) {
   	  // int cnt = 0;
   	  // for(int j = l; j <= r; j++) {
   	  	// if((j >> i) & 1) cnt++;
   	  // }
   	  // //cout << cnt << endl;
   	  // mx = max(cnt, mx);
   	// }
   	// cout << (r - l + 1) - mx << "\n";
   // }
   // return 0;
// }
//  

 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
int pre[32][N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 0; i < 32; i++) {
   	  for(int j = 1; j < N; j++) {
   	  	pre[i][j] = pre[i][j - 1] + ((j >> i) & 1);
   	  }
    }
   int t; cin >> t;
   while(t--) {
   	int l, r; cin >> l >> r;
   	int mx = 0;
   	for(int i = 0; i < 32; i++) {
   	   mx = max(mx, pre[i][r] - pre[i][l - 1]);
   	}
   	cout << (r - l + 1 - mx) << "\n";
   }
   return 0;
}
 