//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll n, k; cin >> n >> k;
      if(n % 2 == 0 or n % k == 0 or (n % k) % 2 == 0) cout << "YES\n";
      else {
         ll tem = n / k;
         ll x = (tem - 1) * k;
         //cout << x << endl;
         if((n - x) % 2 == 0) cout << "YES\n";
         else cout << "NO\n";
      }
    }
    return 0;
}

//approach 2:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll n, k; cin >> n >> k;
      if(n % 2 == 1 and k % 2 == 0) cout << "NO\n"; // n odd, k even;
      else cout << "YES\n";
    }
    return 0;
}
