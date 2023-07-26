//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c; cin >> a >> b >> c;
    int ans = INT_MIN;
    ans = max(ans, a + b + c);
    ans = max(ans, a * b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    cout << ans << "\n"; 
	return 0;
} 