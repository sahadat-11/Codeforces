//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   while(t--) {
      ll n; cin >> n; ll a[n], b[n];
      vector<ll> zero, one;
      for(ll i = 0; i < n; i++) cin >> a[i];
      for(ll i = 0; i < n; i++) cin >> b[i];
      for(ll i = 0; i < n; i++) {
         if(a[i] == 0) zero.push_back(b[i]);
         else one.push_back(b[i]);
      }
      ll sum = 0;
     // cout << one.size() << " " << zero.size() << endl;
      if(zero.size() == one.size()) {
         ll mn = *min_element(b, b + n);
         for(ll i = 0; i < n; i++) sum += 2 * b[i];
         sum -= mn;
      }
      //cout << sum << endl;;
      else {
         sort(one.rbegin(), one.rend());
         sort(zero.rbegin(), zero.rend());
         ll x = min(one.size(), zero.size());
         for(ll i = 0; i < x; i++) {
             sum += 2 * one[i];
             sum += 2 * zero[i];
         }
         for(ll i = x; i < one.size(); i++) sum+= one[i];
        for(ll i = x; i < zero.size(); i++) sum+= zero[i];
      }
      cout << sum << "\n";
   }
    return 0;
}

// approach 2 :

#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
   int n;cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   vector<int> p,q;
   for(int i=0;i<n;i++){
      int x;cin>>x;
      if(a[i]) p.push_back(x);
      else q.push_back(x);
   }
   sort(p.rbegin(),p.rend());
   sort(q.rbegin(),q.rend());
   int i=0;
   int ans=0;
   while(i<p.size()&&i<q.size()){
      ans+=2*p[i]+2*q[i];
      ++i;
   }
   while(i<p.size()){
      ans+=p[i++];
   }
   while(i<q.size()){
      ans+=q[i++];
   }
   if(p.size()==q.size()){
      ans-=min(p.back(),q.back());
   }
   cout<<ans<<'\n';
}
signed main(){
   int t;cin>>t;
   while(t--) solve();
return 0;
}
// approach 3 :

#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   long long ans=0;
   int a[n],b[n],c[n];
   for(int i=0;i<n;i++) {
      cin>>a[i];
   }
   int n1=0,n2=0;
   for(int i=0;i<n;i++) {
      int x;
      cin>>x;
      ans+=x;
      if(a[i]==1) b[n1]=x,n1++;
      else c[n2]=x,n2++;
   }
   sort(b,b+n1);
   sort(c,c+n2);
   if(n1==n2) {
      ans*=2;
      ans-=min(b[0],c[0]);
   }
   else {
      if(n1>n2) {
         for(int i=0;i<n2;i++) ans+=b[n1-i-1]+c[n2-i-1];
      }
      else for(int i=0;i<n1;i++) ans+=b[n1-i-1]+c[n2-i-1];
   }
   cout<<ans<<endl;
}
int main (){
   int t;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}