//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   int c = 0;
   while(a <= b) {
   	 a *= 3, b *= 2;
   	 c++;
   }
   cout << c << "\n";
   return 0;
}