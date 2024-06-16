//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 int n, k; cin >> n >> k; int a[n];
     for(int i = 0; i < n; i++) cin >> a[i];
     bool flag = false;
     for(int i = 0; i < n; i++) {
     	if(a[i] == k) flag = true;
     }
     if(flag) cout << "YES\n";
     else cout << "NO\n";
   }
  
   
   return 0;
}