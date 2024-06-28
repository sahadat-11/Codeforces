//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   bool flag = false;
   if(n % 2 == 0) flag = true;
   else {
   	 for(int i = 1; i < n; i++) {
   	 	if(v[i - 1] >= v[i]) flag = true;
   	 }
   }
   if(flag) {
   	 cout << "YES\n";
   }
   else cout << "NO\n";
}
int main() {
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
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
    cin >> a[i];
   }
   bool flag = false;
   if(n % 2 == 0) flag = true;
   for(int i = 1; i < n; i++) {
    if(a[i] <= a[i - 1]) flag = true;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
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

//https://prnt.sc/u5IQGXkpS-Fg
