//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool binarysearch(int a[], int n, int x) {
   int l = 0, r = n - 1;
   while(l <= r) {
      int m = l + (r - l) / 2;
      if(a[m] == x) return true;
      else if(a[m] > x) {
         r = m - 1;
      }
      else {
         l = m + 1;
      }
   }
   return false;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   sort(a, a + n);
   while(k--) {
      int x; cin >> x;
      if(binarysearch(a, n, x)) cout << "YES\n";
      else cout << "NO\n";
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
   set<int> st;
   for(int i = 0; i < n; i++) {
      cin >> a[i];
      st.insert(a[i]);
   } 
   while(k--) {
      int x; cin >> x;
      if(st.find(x) != st.end()) cout << "YES\n";
      else cout << "NO\n";
   }
   return 0;
}