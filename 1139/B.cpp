//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll sum = 0;
   for(int i = n - 2; i >= 0; i--) {
   	 v[i] = min(v[i], max(0, v[i + 1] - 1));
   }
   //for(int i = 0; i < n; i++) cout << v[i] << "\n";
   for(int i = 0; i < n; i++) sum += v[i];
   cout << sum << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
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
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = n - 1; i >= 1; i--) {
   	 if(a[i - 1] >= a[i]) {
   	 	a[i - 1] = max(0,(a[i] - 1));
   	 }
   }
   //for(int i = 0; i < n; i++) cout << a[i] << " ";
   ll sum = 0;
   for(int i = 0; i < n; i++) sum += a[i];
   cout << sum << '\n';
   return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int sum = a[n];
  for(int i = n - 1; i >= 1; i--) {
    sum += max(0ll, min(a[i], a[i + 1] - 1));
    a[i] = max(0ll, min(a[i], a[i + 1] - 1));
  }
  cout << sum << "\n";
  return 0;
}