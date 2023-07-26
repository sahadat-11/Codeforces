//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, m, a; cin >> x >> m >> a;
    cout << 1ll * ((x + a - 1) / a) * ((m + a - 1) / a);
	return 0;
} 