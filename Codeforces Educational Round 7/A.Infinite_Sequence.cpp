//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    for(ll i = 1; i < n; i++) {
        n -= i;
    }
    cout << n << "\n";
    return 0;
} 
