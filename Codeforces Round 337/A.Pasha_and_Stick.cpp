//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int x = n / 2;
    int cnt = 0;
    for(int i = 1, j = x - 1; i < j; i++, j--) {
        cnt++;
    }
    if(n % 2) cnt = 0;
    cout << cnt << "\n";          
    return 0;
} 