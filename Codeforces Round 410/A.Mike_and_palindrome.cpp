//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int n = s.size();
    int cnt = 0;
    for(int i = 0, j = n - 1; i <= j; i++, j--) {
        if(s[i] != s[j]) cnt++;
    }
    if(n % 2 and cnt == 0) cout << "YES\n";
    else if(cnt == 1) cout << "YES\n";
    else cout << "NO\n";
    return 0;
} 