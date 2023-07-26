//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h, m, ext; char c; 
    cin >> h >> c >> m >> ext;
    m += ext;
    h += m / 60;
    m %= 60;
    h %= 24;
    if(h < 10) cout << 0 << h << ":";
    else cout << h << ":";
    if(m < 10) cout << 0 << m;
    else cout << m;
    return 0;
} 
