//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, x, y; cin >> n >> x >> y; int a[n];
   for(int i = 0; i < n; i++) {
   	 cin >> a[i];
   }
   for(int i = 0; i < n; i++) {
   	 bool flag = true;
   	 for(int j = i + 1; j <= min(n - 1, i + y); j++) {
   	 	if(a[i] > a[j]) flag = false;
   	 }
   	 for(int j = i - 1; j >= max(0, i - x); j--) {
   	 	if(a[i] > a[j]) flag = false;
   	 }
   	 if(flag) {
   	 	cout << i + 1 << "\n";
   	 	return 0;
   	 }
   }
   return 0;
}