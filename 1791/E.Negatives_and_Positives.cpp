//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int neg = 0, sum = 0, mn = INT_MAX;
   for(int i = 0; i < n; i++) {
    sum += abs(v[i]);
    if(v[i] < 0) neg++;
    mn = min(mn, abs(v[i])); 
   }
   if(neg % 2) sum -= 2 * mn;
   cout << sum << "\n";
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
