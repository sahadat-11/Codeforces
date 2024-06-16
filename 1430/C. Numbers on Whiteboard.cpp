#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        cout<<2<<endl;
        ll a=n,b=n-1;
        for(ll i=1 ; i<n ; i++){
            cout<<b<<" "<<a<<endl;
            a=(a+b+1)/2;
            b--;
        }
    }
}