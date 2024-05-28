//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, c; cin >> n >> c;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   vector<int> ans(n);
   for(int i = 0; i < n; i++) {
    ans[i] = v[i] + i + 1;
   }
   sort(ans.begin(), ans.end());
   int cnt = 0;
   for(int i = 0; i < n; i++) {
    if(ans[i] <= c) {
     cnt++;
     c -= ans[i];
    }
    else break;
   }
   cout << cnt << "\n";
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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, c; cin >> n >> c;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
     v[i] += i;
   }
   sort(v.begin(), v.end());
   int cnt = 0;
   for(int i = 1; i <= n; i++) {
     if(c >= v[i]) {
        cnt++;
        c -= v[i];
     }
   }
   cout << cnt << "\n";
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