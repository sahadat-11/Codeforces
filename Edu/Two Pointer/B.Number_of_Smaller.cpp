//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   vector<int> a(n), b(m), c(m);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < m; i++) cin >> b[i];
   int j = 0;
   for(int i = 0; i < m; i++) {
     if(b[i] > a[j]) {
       while(b[i] > a[j]) {
         j++;
       }
     }
     c[i] = min(j, n);
   }
   for(int i = 0; i < m; i++) cout << c[i] << " ";
   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n], b[m];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];
  int c[m]; int i = 0, j = 0, k = 0;
  while(j < m) {
    while(a[i] < b[j]) i++;
    c[k++] = min(i, n);
    j++;
  }
  for(int i = 0; i < m; i++) cout << c[i] << " ";
  return 0;
}
