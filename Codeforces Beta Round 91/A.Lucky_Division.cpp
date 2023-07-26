//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x[]= {4,7,44,47,74,77,444,447,474,477,744,747,777};
    int n; cin >> n;
    for(int i = 0; i < 13; i++) {
        if(n % x[i] == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
	return 0;
} 