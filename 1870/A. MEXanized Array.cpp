 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 int n, k, x; cin >> n >> k >> x;
   	 bool flag = true;
   	 int sum = 0;
   	 if(n < k or k - 1 > x) flag = false;
   	 else {
   	 	for(int i = 0; i < k; i++) sum += i;
   	 	int xx = n - k;
   	 	if(x == k) x--;
   	 	sum += (x * xx);
   	 }
   	 if(!flag) cout << -1 << "\n";
   	 else cout << sum << "\n";
   }
   return 0;
}
