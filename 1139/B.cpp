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