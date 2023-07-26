//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int a, b, c; cin >> a >> b >> c;
      if(a > b) swap(a, b);
      int n = b + abs(a - b) - a; // n = 2 * (b - a);
      //cout << n << "\n";
      int mx = max(b, c);
      int dif = b - a;
      if(mx > n) cout << -1 << "\n";
      else {
         if(c + dif <= n) cout << c + dif << "\n";
         else cout << c - dif << "\n"; 
      }
     
   }
    return 0;
}

// approach 2: 
#include <bits/stdc++.h>

using namespace std;

int main() {

   int t; cin>>t
   while (t--) {
      int a,b,c; cin>>a>>b>>c;
      int x = abs(a-b);
      if(a>2*x || b>2*x || c>2*x){
         cout<<-1<<endl;
      } else if(c<=x) {
         cout<<c+x<<endl;
      } else {
         cout<<(c+x)%(2*x)<<endl;
      }  
   }
  return 0; 
}