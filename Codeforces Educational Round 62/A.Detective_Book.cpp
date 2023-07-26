//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int cnt = 0, mx = INT_MIN;
    for(int i = 1; i <= n; i++) {
        mx = max(mx, a[i]);
        if(i == mx) cnt++;
    }
    cout << cnt << "\n";
    return 0;
} 

// appraoch 2:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
int main()
{
     sahadat();
      
     ll n; cin >> n; ll a[n];

     ll mx = INT_MIN, cnt = 0;
     for(ll i = 0; i < n; i++) {
       cin >> a[i];
       mx = max(a[i] , mx);

       if(mx == i + 1) cnt++;
     }  

     cout << cnt <<endl;    
    return 0;
}