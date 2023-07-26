//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int b = 0, cnt = 0;
        for(int i = 1; i <= 9; i++) {
            b = b * 10 + 1;
            for(int j = 1; j <= 9; j++) {
                if(b * j <= n) cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
} 