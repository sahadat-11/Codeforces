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
      int c = 1, mx = 1;
      sort(a, a + n);
      for(int i = 1; i < n ; i++) {
         if(a[i] == a[i - 1]) {
            c++; mx = max(c, mx);
         }
         else c = 1;
      }
     // cout << mx << "\n";
      int cnt = 0;
      int mxx = mx;
      while(mx < n) {
         cnt++;
         mx *= 2;
      }
     cout << cnt + (n - mxx) << "\n";
   }
    return 0;
}

// approach 2:

#include <bits/stdc++.h>
using namespace std;

int main(){
   int t,n; cin>>t;
   while(t--){
      int mx=0,res=0;
      map<int ,int> mp;
      cin>>n;
      for(int i=0;i<n;i++){
         int first;
         cin>>first;
         mp[first]++;
         mx=max(mx , mp[first]);
      }
      res = n - mx;
      while(mx < n){
         res++;
         mx *= 2;
      }
      cout << res << endl;  
   }
   
   return 0;
}
   
