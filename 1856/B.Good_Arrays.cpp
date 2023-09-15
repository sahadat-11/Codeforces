//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, cs = 0; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      ll one = 0, other = 0;
      for(int i = 0; i < n; i++) {
         cin >> a[i];
         if(a[i] == 1) one++;
         else other += a[i] - 1;
      }
      //cout << one << " " << other << endl;
      if(n == 1 or one > other) cout << "NO\n";
      else cout << "YES\n";
   }
   return 0;
}

// approach 2:

#include <bits/stdc++.h>
using namespace std;

int t,n,a[100005],ans;

int main()
{
   scanf("%d",&t);
   while(t--)
   {
      long long s = 0;
      int p = 1;
      scanf("%d",&n);
      for(int i = 1;i <= n;i++)
      {
         scanf("%d",&a[i]);
         if(a[i] != 1) s += a[i];
      }
      if(s >= n && n > 1) printf("YES\n");
      else printf("NO\n"); 
   }
}