//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
       int n, c; cin >> n >> c; int a[n + 1];
       for(int i = 1; i <= n; i++) cin >> a[i];
       for(int i = 1; i <= n; i++) {
         a[i] += i;
       }
       //for(int i = 1; i <= n; i++) cout << a[i] << " ";
       //cout << endl;
       sort(a + 1, a + n + 1);
       int cnt = 0;
       ll sum = 0;
       for(int i = 1; i <= n; i++) {
         sum += a[i];
         //cout << sum << " ";
         if(sum <= c) cnt++;
       }
       cout << cnt << "\n";
    }
    return 0;
} 
