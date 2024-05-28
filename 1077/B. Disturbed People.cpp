//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   int a[n];
   for(int i = 0; i < n; i++) {
   	 cin >> a[i];
   }
   int cnt = 0, pre = -1;
   for(int i = 1; i < n - 1; i++) {
   	 if((a[i] == 0) and (a[i - 1] == 1) and (a[i + 1] == 1) and (i - 1 != pre)) {
   	 	cnt++; pre = i + 1;
   	 }
   }
   cout << cnt << "\n";
   return 0;
}