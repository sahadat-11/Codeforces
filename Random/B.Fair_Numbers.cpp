//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lcmfind(int a, int b) {
    return a / (__gcd(a, b)) * b;
}
void solve() {
      ll n; cin >> n;
      ll x = n;
      while(x) {
        ll temp = x % 10;
        x /= 10;
        if(temp > 0 and n % temp != 0) {
            n++;
            x = n;
        }
      }
      cout << n << "\n";    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int lcm = 1;
    // for(int i = 1; i <= 9; i++) {
    //     lcm = lcmfind(lcm, i);
    // }
    // cout << lcm << endl; // a number which is divisibile by 1 to 9 each number;
    // the minimum number is 2520;

    int t; cin >> t;
    while(t--) {
      solve();
    }
    return 0;
} 

// approach 2:

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn=1e18+30;
bool pd(ll x){
    ll n=x;
    while(n){
        if(n%10!=0&&x%(n%10)!=0){
            return false;
        }
        n/=10;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(ll i=n;i<=maxn;i++){
            if(pd(i)){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
} 