//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   int gcd = 0;
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
     gcd = __gcd(gcd, v[i]);
   }
   int ans;
   if(gcd == 1) ans = 0;
   else if(__gcd(gcd, n) == 1) ans = 1;
   else if(__gcd(gcd, n - 1) == 1) ans = 2;
   else ans = 3;
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


#include<bits/stdc++.h>
using namespace std;
int t,n,a[200];
int main() {
    cin>>t;
    while(t--) {
        cin>>n;
        int p=0,ans=3;
        for(int i=1;i<=n;i++)cin>>a[i],p=__gcd(p,a[i]);
        if(p==1)ans=0;
        for(int i=1;i<=n;i++)if(__gcd(i,p)==1)ans=min(ans,n-i+1);
        cout<<ans<<endl;
    }
    return 0;
}