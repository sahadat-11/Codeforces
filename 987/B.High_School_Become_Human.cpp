//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y; cin >> x >> y;
    double p = y * log(x);
    double q = x * log(y);
    if(p > q) cout << ">\n";
    else if(p < q) cout << "<\n";
    else cout << "=\n";
    return 0;
}
//https://prnt.sc/kSqZw0MVCKQh