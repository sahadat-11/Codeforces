//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    for(int i = 2 * n + 1, j = 1; i <= 4 * n; i++, j++) {
      //cout << i << " " << j << " "; 
      if(i <= m) cout << i << " ";
      if(j <= m) cout << j << " ";
    }
    return 0;
} 

// approach 2:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n, m;
   cin >> n >> m;
   for (ll i = 1; i <= 2 * n; i++) {
    ll num = 2 * n + i;
    if (num <= m) cout << num << " ";
    if (i <= m) cout << i << " ";
  }
  return 0;
}