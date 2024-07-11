//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1), b(n + 1), c(n + 1);
   int sum = 0;
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
     sum += a[i];
   }
   for(int i = 1; i <= n; i++) {
     cin >> b[i];
   }
   for(int i = 1; i <= n; i++) {
     cin >> c[i];
   }
   int x = (sum + 2) / 3;
   //cout << x << "\n";
   int sum1 = 0, sum2 = 0, sum3 = 0;
   int a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0;
   for(int i = 1; i <= n; i++) {
    vector<int> v;
    v.push_back(a[i]);
    v.push_back(b[i]);
    v.push_back(c[i]);
    sort(v.begin(), v.end());
    for(int j = 0; j < 3; j++) {
        if(v[j] >= x) {
            if(v[j] == a[i] and a1 == 0) {
                a1 = i, b1 = i; break;
            }
            else if(v[j] == b[i] and a2 == 0) {
               a2 = i, b2 = i; break;
            }
            else if(v[j] == c[i] and a3 == 0) {
                a3 = i, b3 = i; break;
            }
        }
    }
   }
//    cout << a1 << " " << b1 << " ";
//    cout << a2 << " " << b2 << " ";
//    cout << a3 << " " << b3 << " ";
//    cout << "\n";
   int last = 1;
   for(int i = 1; i <= n; i++) {
    if(a1 == 0 and b1 == 0) {
        sum1 += a[i];
    }
    if(a2 == 0 and b2 == 0) {
        sum2 += b[i];
    }
    if(a3 == 0 and b3 == 0) {
        sum3 += c[i];
    }
    vector<int> v;
    v.push_back(sum1);
    v.push_back(sum2);
    v.push_back(sum3);
    sort(v.begin(), v.end());
    // for(auto u : v) {
    //     cout << u <<"  ";
    // }
    // cout << "\n";
    int mx = 0;
    for(int i = 0; i < 3; i++) {
        if(v[i] >= x) {
            if(v[i] == sum1 and a1 == 0) {
                mx = v[i]; break;
            }
            else if(v[i] == sum2 and a2 == 0) {
                mx = v[i]; break;
            }
            else if(v[i] == sum3 and a3 == 0) {
                mx = v[i]; break;
            }
        }
    }
    //cout << mx << "\n";
    if(sum1 == mx and sum1 >= x) {
        a1 = last, b1 = i;
        sum1 = 0, sum2 = 0, sum3 = 0;
        last = b1 + 1;
    }
    else if(sum2 == mx and sum2 >= x) {
        a2 = last, b2 = i;
        sum1 = 0, sum2 = 0, sum3 = 0;
        last = b2 + 1;
    }
    else if(sum3 == mx and sum3 >= x) {
        a3 = last, b3 = i;
        sum1 = 0, sum2 = 0, sum3 = 0;
        last = b3 + 1;
    }
   }
//    if(a1 == 0 or a2 == 0 or a3 == 0 or b1 == 0 or b2 == 0 or b3 == 0) {
//     cout << "-1\n"; return;
//    }
   cout << a1 << " " << a2 << " ";
   cout << a2 << " " << b2 << " ";
   cout << a3 << " " << b3 << " ";
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}