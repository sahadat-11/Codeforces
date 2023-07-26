//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k; int a[n];
    int oddctn = 0, evencnt = 0;
    bool flag;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] % 2) oddctn++;
      else evencnt++;
    }
    if(k % 2) {
    if(k == oddctn + evencnt and evencnt % 2 == 0) flag = true;
    else if(k == oddctn + evencnt and evencnt % 2 != 0) flag = false;
    else if(oddctn == 0) flag = false;
    else flag = true;
    }
    else {
    if(k == oddctn + evencnt and evencnt % 2 == 0) flag = false;
    else if(k == oddctn + evencnt and evencnt % 2 != 0) flag = true;
    else if(oddctn == 0 or evencnt == 0) flag = false;
    else flag = true;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
}

  return 0;
}

// approach 2:

 #include<iostream>
 using namespace std;
 int main() {
   int t;
   cin >> t;
   while (t--) {
     int n, k, o = 0, e = 0;
     cin >> n >> k;
     for (int i = 0; i < n; i++) {
       int x;
       cin >> x;
       if (x % 2 == 0) {
         e++;
       } else {
         o++;
       }
     }
     if ((e == 0 && k % 2 == 0) || (o == 0) || ((o % 2 == 0) && (k == n))) {
       cout << "NO" << endl;
     } else {
       cout << "YES" << endl;
     }
   }
 }