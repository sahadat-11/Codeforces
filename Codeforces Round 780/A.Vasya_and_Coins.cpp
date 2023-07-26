//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     ll a, b; cin >> a >> b;
     ll ans = 0;
     if(a == 0) ans = 0;
     else if (b == 0) ans = a;
     else ans = 2 * b + a;
     cout << ans + 1 << "\n";
   }
    return 0;
}

// approach 2:

#include <iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int a,b;
      cin>>a>>b;
      if(a==0)
         cout<<1<<endl;
      else
         cout<<a+(b*2)+1<<endl;
   }
}