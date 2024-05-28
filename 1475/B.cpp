//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; cin >> n; 
     bool flag;
     if(n < 2020) flag = false;
     else {
        int x = n % 2020;
        int y = n / 2020;
        if(x > y) flag = false;
        else flag = true;
     }
     if(flag) {
       cout << "YES\n";
     }
     else {
       cout << "NO\n";
     }
   }
   return 0;
}