//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; cin >> n; int a[n];
     for(int i = 0; i < n; i++) cin >> a[i];
     int one = count(a, a + n, 1);
     //cout << one << endl;
     int cost = one / 2 + n - one + one % 2;
     cout << cost << "\n";
   }
    return 0;
}
