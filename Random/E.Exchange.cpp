//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
    while(t--) {
        int n, a, b; cin >> n >> a >> b;
        int ans;
        if(n < a) ans = 1;
        else if(a > b) ans = 1;
        else {
           ans = (n + a - 1) / a;
        }
        cout << ans << "\n";
    }
    return 0;
}
