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
   int sum1 = 0, sum2 = 0, c1 = 0, c2 = 0;
   for(int i = 0, j = n - 1; i <= j;) {
   	 if(sum1 <= sum2) {
   	 	sum1 += a[i];
   	 	i++; c1++;
   	 }
   	 else {
   	 	sum2 += a[j];
   	 	j--; c2++;
   	 }
   	 //cout << sum1 << " " << sum2 << endl;
   }
   cout << c1 << " " << c2 << endl;
   return 0;
}
