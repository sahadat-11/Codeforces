//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 int n, c = 1; cin >> n;
   	 for(int i = 1; i <= n; i++) {
   	 	cout << c << " ";
   	 	c += 2;
   	 }
   	 cout << "\n";
   }
   return 0;
}