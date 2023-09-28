//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int cnt = 1, mx = 1;
   for(int i = 1; i < n; i++) {
   	  if(a[i] > a[i - 1]) {
   	  	cnt++;
   	  	mx = max(cnt, mx);
   	  }
   	  else {
   	  	cnt = 1;
   	  }
   }
   cout << mx << "\n";
   return 0;
}