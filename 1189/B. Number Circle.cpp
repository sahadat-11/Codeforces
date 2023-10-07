//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) {
   	 cin >> a[i];
   }
   sort(a, a + n);
   bool flag = true;
   if(a[n - 1] >= (a[n - 2] + a[n - 3])) flag = false;
   
   if(!flag) {
   	 cout << "NO\n";
   }
   else {
   	 cout << "YES\n";
   	 cout << a[n - 1] << " ";
   	 for(int i = n - 3; i >= 0; i--) cout << a[i] << " ";
   	 cout << a[n - 2];
   }
   return 0;
}
