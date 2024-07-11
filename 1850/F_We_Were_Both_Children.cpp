//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     mp[a[i]]++;
   }
   vector<int> cnt(n + 1, 0);
   for(int i = 1; i <= n; i++) {
     for(int j = 1; j * j <= i; j++) {
        if(i % j == 0) {
            cnt[i] += mp[j];
            if(j != i / j) {
                cnt[i] += mp[i / j];
            }
        }
     }
   }
   cout << *max_element(cnt.begin(), cnt.end())<< "\n";
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

//(N * sqrt(N) * log(N))


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     mp[a[i]]++;
   }
   vector<int> cnt(n + 1, 0);
   for(int i = 1; i <= n; i++) {
     for(int j = i; j <= n; j += i) {
        cnt[j] += mp[i];
     }
   }
   cout << *max_element(cnt.begin(), cnt.end())<< "\n";
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

//(N * log(N))