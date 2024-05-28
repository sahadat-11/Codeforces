//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   for(int i = 0; i < n; i++) {
      int sum1 = 0, sum2 = 0, f = 0;
      for(int j = i; j < n; j++) {
         if(!f) sum1 += a[j];
         else sum2 += a[j];
         f ^= 1;
         if(sum1 == sum2) {
            cout << "YES\n"; return;
         } 
      }
   }
   cout << "NO\n";
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

// O(N * N)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   map<int, int> mp;
   mp[0]++;
   int sum = 0, f = 1;
   for(int i = 0; i < n; i++) {
     if(f) sum += a[i];
     else sum -= a[i];
     if(mp.find(sum) != mp.end()) {
       cout << "YES\n"; return;
     }
     f ^= 1;
     mp[sum]++;
   }
   cout << "NO\n";
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      map<ll, ll> mp;
      mp[0] = 1;
      bool flag = false;
      ll sum = 0;
      for(int i = 0; i < n; i++) {
         if(i % 2 == 0) sum += a[i];
         else sum -= a[i];
         if(mp[sum] >= 1) {
            flag = true;
         }
         mp[sum]++;
      }
      if(flag) cout << "YES\n";
      else cout << "NO\n";
   } 
   return 0;
}

