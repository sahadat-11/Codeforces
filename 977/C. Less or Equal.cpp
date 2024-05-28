//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   sort(a, a + n);
   if(k == 0) {
   	 if(a[0] > 1) cout << "1\n";
   	 else cout << "-1\n"; // if(a[0] == 1)
   }
   else if(n == k) {
   	 cout << a[n - 1];
   }
   else {
   	 int x = a[k - 1];
     int y = a[k];
     if(x != y) cout << x << "\n";
     else cout << "-1\n";
   }
   
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   sort(a, a + n);
   if(k == 0) {
   	 if(a[0] > 1) cout << "1\n";
   	 else cout << "-1\n";
   }
   else if(n == k) {
   	 cout << a[n - 1];
   }
   else {
   	 int x = a[k - 1];
     int y = a[k];
     if(x != y) cout << x << "\n";
     else cout << "-1\n";
   }
   
   return 0;
}
