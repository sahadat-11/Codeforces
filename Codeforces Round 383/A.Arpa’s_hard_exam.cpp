//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000000
void power(ll b, ll p) {
    ll rs = 1;
    while(p > 0) {
        if(p & 1) {
            rs = ((rs % mod) * (b % mod)) % mod;
            p--;
        }
        else {
            b = ((b % mod) * (b % mod)) % mod;;
            p >>= 1;
        }
    }
    cout << rs % 10;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    power(1378, n);
    return 0;
} 
