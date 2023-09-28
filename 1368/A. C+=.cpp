//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 int a, b, c; cin >> a >> b >> c;
   	 int cnt = 0;
   	 while(max(a, b) <= c) {
   	 	if(a > b) b += a;
   	 	else a += b;
   	 	cnt++;
   	 }
   	 cout << cnt << "\n";
   }
   return 0;
}