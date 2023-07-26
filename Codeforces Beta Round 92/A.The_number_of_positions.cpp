//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000000
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b; cin >> n >> a >> b;
    cout << min(n - a, b + 1);
    return 0;
} 
