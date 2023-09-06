//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
       int n; cin >> n; int a[n];
       for(int i = 0; i < n; i++) cin >> a[i];
       ll sum = 0, neg = 0;
       for(int i = 0; i < n; i++) {
         if(a[i] < 0) neg++;
         a[i] = abs(a[i]);
         sum += a[i];
       }
       sort(a, a + n);
       if(neg % 2) sum -= 2 * a[0];
       cout << sum << "\n";
    }
    return 0;
} 
