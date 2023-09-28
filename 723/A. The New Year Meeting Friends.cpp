//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a[3];
   for(int i = 0; i < 3; i++) {
   	cin >> a[i];
   }
   sort(a, a + 3);
   cout << abs(a[1] - a[0]) + abs(a[1] - a[2]);
   return 0;
}